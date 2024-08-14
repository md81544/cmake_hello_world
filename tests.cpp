#define CATCH_CONFIG_MAIN
#include "hellolib.h"

#include <catch2/catch_all.hpp>

TEST_CASE("Do stuff")
{
    REQUIRE(sumUp(1, 1) == 2);
}
TEST_CASE("Do more stuff")
{
    REQUIRE(sumUp(50, 4) == 54);
}
TEST_CASE("Do even more stuff")
{
    REQUIRE(sumUp(6, 63) == 69);
}
TEST_CASE("Do final stuff")
{
    REQUIRE(sumUp(80'000, 1'544) == 8'1544);
}