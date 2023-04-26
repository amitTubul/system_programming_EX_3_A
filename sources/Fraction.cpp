#include "Fraction.hpp"
namespace ariel{
    Fraction::Fraction(int numerator, int denominator):_numerator(numerator),_denominator(denominator){}

    Fraction::Fraction(float num):_numerator(static_cast<int>((float)num*per)), _denominator(per){}

    Fraction operator+(const Fraction& fraction1,const Fraction& fraction2){
        return fraction1;
    }
    Fraction operator-(const Fraction& fraction1,const Fraction& fraction2){
        return fraction1;
    }
    Fraction operator*(const Fraction& fraction1,const Fraction& fraction2){
        return fraction1;
    }
    Fraction operator/(const Fraction& fraction1,const Fraction& fraction2){
        return fraction1;
    }
    bool operator==(const Fraction& fraction1,const Fraction& fraction2){
        return false;
    }
    bool operator!=(const Fraction& fraction1,const Fraction& fraction2){
        return false;
    }
    bool operator<(const Fraction& fraction1,const Fraction& fraction2){
        return false;
    }
    bool operator>(const Fraction& fraction1,const Fraction& fraction2){
        return false;
    }
    bool operator<=(const Fraction& fraction1,const Fraction& fraction2){
        return false;
    }
    bool operator>=(const Fraction& fraction1,const Fraction& fraction2){
        return false;
    }
    std::ostream& operator<< (std::ostream& output, const Fraction& c){
        return output;
    }
    std::istream& operator>> (std::istream& input , Fraction& c){
        return input;
    }

    Fraction& Fraction::operator++() {
        return *this;
    }
    Fraction Fraction::operator++(int) {
        return Fraction(1,1);
    }
    Fraction& Fraction::operator--() {
        return *this;
    }
    Fraction Fraction::operator--(int) {
        return Fraction(1,1);
    }

}