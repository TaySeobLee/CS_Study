#include <catch2/catch_test_macros.hpp>
#include "example/example.hpp"

TEST_CASE("greet works") {
    REQUIRE(cs::greet("World") == "Hello, World!");
}

TEST_CASE("add works") {
    REQUIRE(cs::add(2,3) == 5);
}
