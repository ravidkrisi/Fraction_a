
#include <iostream>
#include <numeric>

using namespace std;

namespace ariel
{
    class Fraction 
    {
        // attributes 
        private:
            int numerator; // represent the top of a fraction 
            int denominator; // represent the bottom of a fraction 
        
        public:
            Fraction(int nrm, int dnm); // constructor
            Fraction(float num);


            // declare and define getters
            // return the numerator 
            int getNumerator() const
            {
                return this->numerator;
            } 
            // return the denominator 
            int getDenominator() const
            {
                return this->denominator;
            }
            // this fucntion reduce the fraction 
            void reduced()
            {
                int gcd = std::gcd(this->numerator, this->denominator);
                this->numerator = this->numerator / gcd; 
                this->denominator = this->denominator / gcd; 
            }
            // this function increment the fraction 
            void increment()
            {
                this->numerator = this->numerator + this->denominator;
                this->reduced();
            }

            void decrement()
            {
                this->numerator = this->numerator - this->denominator; 
                this->reduced();
            }


            //functions 
            // this function gets float number and convert it to Fraction and return fraction 
            Fraction floatToFraction (float flt)
            {
                int whole = flt/1; // get the whole part of float 
                float twoDigit = ((flt-whole)*100)/1; // get the 2 digits after to dot
                
                int nrm = whole*100 + twoDigit;
                int dnm = 100;
                int gcd = std::gcd(nrm, dnm); // calc the gcd of nrm and dnm 
                return Fraction((nrm/gcd), (dnm/gcd));
            }
            
            // declare overloading opertators 
            // aritmectic 
            //+
            Fraction operator + (const Fraction& other); // overloading + operator
            // -
            Fraction operator - (const Fraction& other); // overloading - operator
            // *
            Fraction operator * (const Fraction& other); // overloading * operator
            // /
            Fraction operator / (const Fraction& other); // overloading / operator
            //comprasion 
            // ==
            bool operator == (const Fraction& other); // overloading == operator
            // <
            bool operator < (const Fraction& other); // overloading < operator
            // <=
            bool operator <= (const Fraction& other); // overloading <= operator
            // >
            bool operator > (const Fraction& other); // overloading > operator
            // >=
            bool operator >= (const Fraction& other); // overloading >= operator
            // increment decrement 
            Fraction& operator ++(); // overloading pre ++ operator
            Fraction operator ++(int); // overloading post ++ operator
            Fraction& operator --(); // overloading pre -- operator
            Fraction operator --(int); // overloading post -- operator
            // ostream 
            friend ostream& operator << (ostream& os, const Fraction& fraction)
            {
                return (os << fraction.numerator << "/" << fraction.denominator);
            }
            friend std::istream& operator >> (std::istream& is, Fraction& fraction)
            {
                char s = '\\';
                is >> fraction.numerator >> s >> fraction.denominator;
                return is;
            }
    };
}