#include <hardware/lib.hpp>
#include <iostream>
#include <swerve/lib.hpp>

int main(int argc, const char** argv) {
  using std::cout;

  cout << "Hello, World!";
  cout << "HW TEST: " << hw::hw_test();
  cout << "SWV TEST: " << swv::test_fn();

  return 0;
}
