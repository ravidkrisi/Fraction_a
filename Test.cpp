#include "sources/Fraction.hpp"
#include "doctest.h"

using namespace ariel;

TEST_CASE("create Fraction from integers")
{
    CHECK_NOTHROW(Fraction(17,5));
}


TEST_CASE("zero as argument for Denominator")
{
    CHECK_THROWS(Fraction(0,0));
}

TEST_CASE("test operator +")
{
    Fraction frac1(1,4);
    Fraction frac2(1,4);
    Fraction frac3(2,4);

    CHECK((frac1+frac2)==frac3);
    CHECK((frac2+frac1)==0.5);
}

TEST_CASE("test operator -")
{
    Fraction frac1(1,4);
    Fraction frac2(1,4);
    Fraction frac3(0,1);

    CHECK((frac1-frac2)==frac3);
    CHECK((frac2-frac1)==0.0);
}

TEST_CASE("test operator *")
{
    Fraction frac1(1,2);
    Fraction frac2(1,2);
    Fraction frac3(1,4);

    CHECK((frac1*frac2)==frac3);
    CHECK((frac2*frac1)==0.25);
}

TEST_CASE("test operator /")
{
    Fraction frac1(1,2);
    Fraction frac2(1,2);
    Fraction frac3(1,1);

    CHECK((frac1/frac2)==frac3);
    CHECK((frac2/frac1)==1);
}

TEST_CASE("test operations with zero")
{
    Fraction frac1(1,2);

    CHECK(frac1*0 == 0);
    CHECK_THROWS(frac1/0);
}


TEST_CASE("test == operator with fraction integer and decimal")
{
    Fraction frac1(1,4);
    Fraction frac2(2,8);
    Fraction frac3(3,8);

    CHECK(frac1==frac2);
    CHECK_FALSE(frac1 == frac3);

    CHECK(frac1 == 0.25);  
    CHECK(!(frac1==0.38)); 
    CHECK(0.25 == frac1);  
    CHECK(!(0.38 == frac1)); 
}
TEST_CASE("test > operator with fraction integer and decimal")
{
    Fraction frac1(1,4);
    Fraction frac2(2,8);
    Fraction frac3(3,8);

    CHECK(frac3>frac1);
    CHECK(!(frac1>frac2));

    CHECK(frac1>0.20); 
    CHECK(!(frac1>1));
    CHECK(1>frac1); 
    CHECK(!(0.1>frac1));
}

TEST_CASE("test < operator with fraction integer and decimal")
{
    Fraction frac1(1,4);
    Fraction frac2(2,8);
    Fraction frac3(3,8);

    CHECK(frac1<frac3);
    CHECK(!(frac1<frac2));

    CHECK(frac1<0.30); 
    CHECK(!(frac1<0.1));
    CHECK(0.1<frac1); 
    CHECK(!(1<frac1));
}

TEST_CASE("test <= operator with fraction integer and decimal")
{
     Fraction frac1(1,4);
    Fraction frac2(2,8);
    Fraction frac3(3,8);

    CHECK(frac3>=frac1);
    CHECK(frac1>=frac2);

    CHECK(frac1>=0.20); 
    CHECK(!(frac1>=1));
    CHECK(1>=frac1); 
    CHECK(!(0.1>=frac1));
}

TEST_CASE("test >= operator with fraction integer and decimal")
{
    Fraction frac1(1,4);
    Fraction frac2(2,8);
    Fraction frac3(3,8);

    CHECK(frac3>=frac1);
    CHECK(frac1>=frac2);

    CHECK(frac1>=0.20); 
    CHECK(!(frac1>=1));
    CHECK(1>=frac1); 
    CHECK(!(0.1>=frac1));
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

