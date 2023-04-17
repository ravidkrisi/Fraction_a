#include "Fraction.hpp"
#include <numeric>

using namespace ariel;
using namespace std;

// define constructor 
Fraction::Fraction(int nrm, int dnm): numerator(nrm), denominator(dnm){}

//overlaoding operators
// sums two fractions 
Fraction Fraction::operator + (const Fraction& other)
{
    return Fraction(1,1);
    // int nrm = (this->getNumerator()*other.getDenominator()) + (other.getNumerator()*this->getDenominator()); // calc new fraction nrm
    // int dnm = this->getDenominator()*other.getDenominator(); // calc new fraction dnm
    // int gcd = std::gcd(nrm, dnm); // calc the gcd of nrm and dnm 

    // return Fraction((nrm/gcd), (dnm/gcd)); 
}

Fraction Fraction::operator + (const float dec)
{
    return Fraction(1,1);
}

Fraction operator+ (const float dec, const Fraction& frac)
{
    return Fraction(1,1);
}

Fraction ariel::operator + (const float dec, const Fraction& frac)
{
    return Fraction(1,1);
}

// substract two fractions 
Fraction Fraction::operator - (const Fraction& other)
{
    return Fraction(1,1);
}

Fraction Fraction::operator - (const float dec)
{
    return Fraction(1,1);
}

Fraction ariel::operator - (const float dec, const Fraction& frac)
{
    return Fraction(1,1);
}

// multiply two fractions 
Fraction Fraction::operator * (const Fraction& other)
{
    return Fraction(1,1);
}

Fraction Fraction::operator * (const float dec)
{
    return Fraction(1,1);
}

Fraction ariel::operator * (const float dec, const Fraction& frac)
{
    return Fraction(1,1);
}

// divide two fractions 
Fraction Fraction::operator / (const Fraction& other)
{
    return Fraction(1,1);
}

Fraction Fraction::operator / (const float dec)
{
    return Fraction(1,1);
}

Fraction ariel::operator / (const float dec, const Fraction& frac)
{
    return Fraction(1,1);
}

// compare two fractions  
bool Fraction::operator == (const Fraction& other)
{
    return true;
}

bool Fraction::operator == (const float dec)
{
    return true;
}

bool ariel::operator == (const float dec, const Fraction& frac)
{
    return true; 
}

// compare two fractions  
bool Fraction::operator < (const Fraction& other)
{
    return true;
}

bool Fraction::operator < (const float dec)
{
    return true;
}

bool ariel::operator < (const float dec, const Fraction& frac)
{
    return true; 
}

// compare two fractions  
bool Fraction::operator > (const Fraction& other)
{
    return true;
}

bool Fraction::operator > (const float dec)
{
    return true;
}

bool ariel::operator > (const float dec, const Fraction& frac)
{
    return true; 
}

// compare two fractions  
bool Fraction::operator <= (const Fraction& other)
{
    return true;
}

bool Fraction::operator <= (const float dec)
{
    return true;
}

bool ariel::operator <= (const float dec, const Fraction& frac)
{
    return true; 
}

// compare two fractions  
bool Fraction::operator >= (const Fraction& other)
{
    return true;
}

bool Fraction::operator >= (const float dec)
{
    return true;
}

bool ariel::operator >= (const float dec, const Fraction& frac)
{
    return true; 
}

// increment fraction 
Fraction& Fraction::operator++()
{
    return *this;
}

Fraction Fraction::operator++(int)
{
    return Fraction(1,1);
}

// decrement fraction 
Fraction& Fraction::operator--()
{
    return *this;
}

Fraction Fraction::operator--(int)
{
    return Fraction(1,1);
}









