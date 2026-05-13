/*
 * Project: coral66
 * Author : Copyright S. Hamblett <steve.hamblett@linux.com>
 * Date   : 31/01/2026
 */

#include "lib/adder/adder.hpp"

#include "test/vendor/catch2v3/catch_amalgamated.hpp"

TEST_CASE("Adder - Simple", "[adder]")
{
    SECTION("1 + 2")
    {
        auto theAdder = Adder{};
        CHECK(theAdder.add(1, 2) == 3);
    }

    SECTION("10 + 11")
    {
        auto theAdder = Adder{};
        CHECK(theAdder.add(10, 11) == 21);
    }
}

TEST_CASE("Adder - Complex", "[adder]")
{
    SECTION("1+9 + 2+6")
    {
        auto theAdder = Adder{};
        CHECK(theAdder.add(1 + 9, 2 + 6) == 18);
    }

    SECTION("50+1+2 + 100-5")
    {
        auto theAdder = Adder{};
        CHECK(theAdder.add(50 + 1 + 2, 100 - 5) == 148);
    }
}
