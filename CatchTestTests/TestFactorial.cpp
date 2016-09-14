#include "Catch.hpp"
#include "../CatchTest/Factorial.hpp"

TEST_CASE("Factorials are computed", "[factorial]") {
  REQUIRE(Factorial(0) == 1);
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(10) == 3628800);
}

TEST_CASE("Swag", "[swag]") {
  REQUIRE("Bob" == "Bob");
  REQUIRE("Bob1" == "Bob2");
}