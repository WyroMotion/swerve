add_executable(swerve_app
  main.cpp
)
target_compile_features(swerve_app PRIVATE cxx_std_20)
target_link_libraries(swerve_app
  PRIVATE
    hardware_lib
    swerve_lib
)

