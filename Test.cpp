#include "sources/Fraction.hpp"
#include "doctest.h"

using namespace ariel;

TEST_CASE("create Fraction from integers")
{
    CHECK_NOTHROW(Fraction(17,5));
}

TEST_CASE("create Fraction from integer and decimal")
{
    CHECK_NOTHROW(Fraction(2.5, 10));
    CHECK_NOTHROW(Fraction(10, 2.5));
}

TEST_CASE("create Fraction from decimals")
{
    CHECK_NOTHROW(Fraction(2.5,3.0));
}
TEST_CASE("zero as argument for Denominator")
{
    CHECK_THROWS(Fraction(0,0));
    CHECK_THROWS(Fraction(0.0, 0.0));
}


TEST_CASE("test == operator with fraction integer and decimal")
{
    CHECK(true == (Fraction(1,4) == Fraction(2,8)));
    CHECK(false == (Fraction(1,3) == Fraction(1,6)));

    CHECK(true == (Fraction(1,4) == 0.25)); // RIGHT SIDE
    CHECK(true == (0.10 == Fraction(1,10))); // LEFT SIDE
    CHECK(true == (Fraction(8,2) == 4)); // RIGHT SIDE
    CHECK(true == (5 == Fraction(5,1))); // LEFT SIDE

    CHECK(false == (Fraction(1,4) == 0.3)); // RIGHT SIDE
    CHECK(false == (0.40 == Fraction(1,10))); // LEFT SIDE
    CHECK(false == (Fraction(8,2) == 5)); // RIGHT SIDE
    CHECK(false == (2 == Fraction(5,1))); // LEFT SIDE
}

TEST_CASE("test > operator with fraction integer and decimal")
{
    CHECK(false == (Fraction(1,4) > Fraction(2,8)));
    CHECK(true == (Fraction(1,3) > Fraction(1,6)));

    CHECK(false == (Fraction(1,4) > 0.25)); // RIGHT SIDE
    CHECK(true == (0.20 > Fraction(1,10))); // LEFT SIDE
    CHECK(false == (Fraction(8,2) > 4)); // RIGHT SIDE
    CHECK(true == (7 > Fraction(5,1))); // LEFT SIDE
}

TEST_CASE("test < operator with fraction integer and decimal")
{
    CHECK(false == (Fraction(1,4) < Fraction(2,8)));
    CHECK(false == (Fraction(1,3) < Fraction(1,6)));
    CHECK(true == (Fraction(1,3) < Fraction(1,1)));

    CHECK(false == (Fraction(1,4) < 0.25)); // RIGHT SIDE
    CHECK(false == (0.20 < Fraction(1,10))); // LEFT SIDE
    CHECK(false == (Fraction(8,2) < 4)); // RIGHT SIDE
    CHECK(true == (2 < Fraction(5,1))); // LEFT SIDE
}

TEST_CASE("test <= operator with fraction integer and decimal")
{
    CHECK(true == (Fraction(1,4) <= Fraction(2,8)));
    CHECK(false == (Fraction(1,3) <= Fraction(1,6)));
    CHECK(true == (Fraction(1,3) <= Fraction(1,1)));

    CHECK(true == (Fraction(1,4) <= 0.25)); // RIGHT SIDE
    CHECK(false == (0.20 <= Fraction(1,10))); // LEFT SIDE
    CHECK(true == (Fraction(8,2) <= 4)); // RIGHT SIDE
    CHECK(false == (7 <= Fraction(5,1))); // LEFT SIDE
    CHECK(true == (2 <= Fraction(5,1))); // LEFT SIDE
}

TEST_CASE("test > operator with fraction integer and decimal")
{
    CHECK(true == (Fraction(1,4) >= Fraction(2,8)));
    CHECK(true == (Fraction(1,3) >= Fraction(1,6)));

    CHECK(true == (Fraction(1,4) >= 0.25)); // RIGHT SIDE
    CHECK(true == (0.20 >= Fraction(1,10))); // LEFT SIDE
    CHECK(true == (Fraction(8,2) >= 4)); // RIGHT SIDE
    CHECK(true == (7 >= Fraction(5,1))); // LEFT SIDE
}

TEST_CASE("test ++ operator pre and post")
{
    Fraction frac1(5,1); // create fraction 
    
    CHECK((5 == frac1++)); // post SIDE
    CHECK(frac1 == 6); // 
    CHECK(7 == ++frac1); // pre SIDE
}

TEST_CASE("test -- operator pre and post")
{
    Fraction frac1(5,1); // create fraction 

    CHECK((5 == frac1--)); // post 
    CHECK(frac1 == 4); // 
    CHECK(3 == --frac1); // pre 
}

