#include <catch2/catch.hpp>
#include <hardware/lib.hpp>

TEST_CASE("run hw_test") { REQUIRE(hw::hw_test()); }
