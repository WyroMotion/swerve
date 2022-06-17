#pragma once

#include "swerve/geometry/Rotation2d.h"
#include "units/angle.h"
#include "units/math.h"
#include "units/velocity.h"

/*
 * Represents the state of one swerve module.
 */
struct SwerveModuleState {
  /*
   * Speed of the wheel of the module.
   */
  units::meters_per_second_t speed = 0_mps;

  /*
   * Angle of the module.
   */
  Rotation2d angle;

  /*
   * Minimize the change in heading the desired swerve module state would
   * require by potentially reversing the direction the wheel spins. If this is
   * used with the PIDController class's continuous input functionality, the
   * furthest a wheel will ever rotate is 90 degrees.
   */
  static SwerveModuleState Optimize(const SwerveModuleState& desiredState,
                                    const Rotation2d& currentAngle) {
    auto delta = desiredState.angle - currentAngle;
    if (units::math::abs(delta.Degrees()) > 90_deg) {
      return {-desiredState.speed, desiredState.angle + Rotation2d{180_deg}};
    } else {
      return {desiredState.speed, desiredState.angle};
    }
  }
};