add_executable(hardware_lib_tests
  lib.cpp
)
target_compile_features(hardware_lib_tests PRIVATE cxx_std_20)
target_link_libraries(hardware_lib_tests
  PRIVATE
    Catch2::Catch2WithMain
    hardware_lib
)

catch_discover_tests(hardware_lib_tests)
