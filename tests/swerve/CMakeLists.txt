add_executable(swerve_lib_tests
  lib.cpp
)
target_compile_features(swerve_lib_tests PRIVATE cxx_std_20)
target_link_libraries(swerve_lib_tests
  PRIVATE
    Catch2::Catch2WithMain
    swerve_lib
)

catch_discover_tests(swerve_lib_tests)
