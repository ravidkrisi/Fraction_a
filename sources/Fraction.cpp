#include "Fraction.hpp"
#include <numeric>

using namespace ariel;
using namespace std;

// define constructor loaded with integers 
Fraction::Fraction(int nrm, int dnm): numerator(nrm), denominator(dnm){this->reduced();}

// define constructor loaded with float num
Fraction::Fraction(float num)
{
    int nrm = (num*1000)/1;
    int dnm = 1000;
    int gcd = std::gcd(nrm, dnm);

    this->numerator = nrm/gcd;
    this->denominator = dnm/gcd;
}

//overlaoding operators
// sums two fractions 
Fraction Fraction::operator + (const Fraction& other)
{
    int nrm = (this->getNumerator()*other.getDenominator()) + (other.getNumerator()*this->getDenominator()); // calc new fraction nrm
    int dnm = this->getDenominator()*other.getDenominator(); // calc new fraction dnm
    int gcd = std::gcd(nrm, dnm); // calc the gcd of nrm and dnm 

    return Fraction((nrm/gcd), (dnm/gcd)); 
}

// substract two fractions 
Fraction Fraction::operator - (const Fraction& other)
{
    int nrm = (this->getNumerator()*other.getDenominator()) - (other.getNumerator()*this->getDenominator()); // calc new fraction nrm
    int dnm = this->getDenominator()*other.getDenominator(); // calc new fraction dnm
    int gcd = std::gcd(nrm, dnm); // calc the gcd of nrm and dnm 

    return Fraction((nrm/gcd), (dnm/gcd)); 
}

// multiply two fractions 
Fraction Fraction::operator * (const Fraction& other)
{
    int nrm = this->getNumerator() * other.getNumerator();
    int dnm = this->getDenominator() * other.getDenominator();

    int gcd = std::gcd(nrm, dnm);

    return Fraction((nrm/gcd), (dnm/gcd));
}

// divide two fractions 
Fraction Fraction::operator / (const Fraction& other)
{
    return *this * Fraction(other.getDenominator(), other.getNumerator());
}

// compare two fractions  
bool Fraction::operator == (const Fraction& other)
{
    int left = this->getNumerator() * other.getDenominator();
    int right = this->getDenominator() * other.getNumerator();
    if(left == right) return true;
    return false;
}

// compare two fractions  
bool Fraction::operator < (const Fraction& other)
{
    int left = this->getNumerator() * other.getDenominator();
    int right = this->getDenominator() * other.getNumerator();
    if(left > right) return true;
    return false;
}

// compare two fractions  
bool Fraction::operator > (const Fraction& other)
{
    int left = this->getNumerator() * other.getDenominator();
    int right = this->getDenominator() * other.getNumerator();
    if(left < right) return true;
    return false;
}

// compare two fractions  
bool Fraction::operator <= (const Fraction& other)
{
    int left = this->getNumerator() * other.getDenominator();
    int right = this->getDenominator() * other.getNumerator();
    if(left <= right) return true;
    return false;
}

// compare two fractions  
bool Fraction::operator >= (const Fraction& other)
{
    int left = this->getNumerator() * other.getDenominator();
    int right = this->getDenominator() * other.getNumerator();
    if(left >= right) return true;
    return false;
}

// increment fraction 
Fraction& Fraction::operator++()
{
    this->increment();
    return *this;
}

Fraction Fraction::operator++(int)
{

    return Fraction(this->getNumerator()+this->getDenominator(),this->getDenominator());
}

// decrement fraction 
Fraction& Fraction::operator--()
{
    this->decrement();
    return *this;
}

Fraction Fraction::operator--(int)
{
    return Fraction(this->getNumerator()-this->getDenominator(),this->getDenominator());
}









