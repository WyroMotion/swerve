#include "swerve/geometry/Rotation2d.h"

#include <cmath>
#include "swerve/units/math.h"

Rotation2d::Rotation2d(units::radian_t value)
    : m_value(value),
      m_cos(units::math::cos(value)),
      m_sin(units::math::sin(value)) {}

Rotation2d::Rotation2d(units::degree_t value)
    : m_value(value),
      m_cos(units::math::cos(value)),
      m_sin(units::math::sin(value)) {}

Rotation2d::Rotation2d(double x, double y) {
  const auto magnitude = std::hypot(x, y);
  if (magnitude > 1e-6) {
    m_sin = y / magnitude;
    m_cos = x / magnitude;
  } else {
    m_sin = 0.0;
    m_cos = 1.0;
  }
  m_value = units::radian_t(std::atan2(m_sin, m_cos));
}

Rotation2d Rotation2d::operator+(const Rotation2d& other) const {
  return RotateBy(other);
}

Rotation2d Rotation2d::operator-(const Rotation2d& other) const {
  return *this + -other;
}

Rotation2d Rotation2d::operator-() const {
  return Rotation2d(-m_value);
}

Rotation2d Rotation2d::operator*(double scalar) const {
  return Rotation2d(m_value * scalar);
}

bool Rotation2d::operator==(const Rotation2d& other) const {
  return std::hypot(m_cos - other.m_cos, m_sin - other.m_sin) < 1E-9;
}

bool Rotation2d::operator!=(const Rotation2d& other) const {
  return !operator==(other);
}

Rotation2d Rotation2d::RotateBy(const Rotation2d& other) const {
  return {Cos() * other.Cos() - Sin() * other.Sin(),
          Cos() * other.Sin() + Sin() * other.Cos()};
}
