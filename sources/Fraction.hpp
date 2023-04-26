#pragma once
#include <iostream>

namespace ariel{
    class Fraction{
    private:
        int _numerator, _denominator;
        static const int per=1000;
    public:
        Fraction(int , int );
        Fraction(float);
        void reduce();// reduce the fraction
        friend Fraction operator+(const Fraction &,const Fraction &);
        friend Fraction operator-(const Fraction &,const Fraction &);
        friend Fraction operator*(const Fraction &,const Fraction &);
        friend Fraction operator/(const Fraction &,const Fraction &);
        friend bool operator==(const Fraction &,const Fraction &);
        friend bool operator!=(const Fraction &,const Fraction &);
        friend bool operator<(const Fraction &,const Fraction &);
        friend bool operator>(const Fraction &,const Fraction &);
        friend bool operator<=(const Fraction &,const Fraction &);
        friend bool operator>=(const Fraction &,const Fraction &);

        Fraction& operator++();// prefix increment
        Fraction operator++(int); // postfix increment
        Fraction& operator--(); // prefix subtract
        Fraction operator--(int); // postfix subtract

        friend std::ostream& operator<< (std::ostream&, const Fraction&);
        friend std::istream& operator>> (std::istream&, Fraction&);

    };
}