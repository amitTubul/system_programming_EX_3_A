#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace ariel;

TEST_CASE("basics") {
    // divide by zero
    CHECK_THROWS(Fraction(0,0));
    CHECK_THROWS(Fraction(3,0));

    // auto reduction in constructor
    Fraction a(2,4);
    CHECK((a==Fraction(1,2)));
}

TEST_CASE("operator +") {
    Fraction a(1,4), b(1,4), zero(0,0);
    CHECK((a+b == Fraction(1,2)));
    CHECK((a+zero == a));
    CHECK((a+b+b == Fraction(3,4)));
    CHECK((a+0.25 == Fraction(1,2)));
}
TEST_CASE("operator -") {
    Fraction a(1,2), b(1,4), zero(0,0);
    CHECK((a-b == a));
    CHECK((b-a == Fraction(-1,4)));
    CHECK((a-zero == a));
    CHECK((a-b-b == zero));
    CHECK((b-0.25 == zero));

}
TEST_CASE("operator *") {
    Fraction a(1,2), b(1,4), zero(0,0);
    CHECK((a*b == Fraction(1,8)));
    CHECK((a*zero == zero));
    CHECK((a*a*b == Fraction(1,16)));
    CHECK((a*0.25 == Fraction(1,8)));

}
TEST_CASE("operator /") {
    Fraction a(1,2), b(1,4), zero(0,0);
    CHECK_THROWS((a/zero));
    CHECK((a/b == Fraction(2,1)));
    CHECK((a/a/b == Fraction(4,1)));
    CHECK((a/0.25 == Fraction(2,1)));

}

TEST_CASE("operator !=") {
    Fraction a(5,3), b(14,21);
    CHECK((a!=b));
}
TEST_CASE("operator >") {
    Fraction a(5,3), b(14,21);
    CHECK((a>b));
    CHECK((a>1.1));

}
TEST_CASE("operator <") {
    Fraction a(5,3), b(14,21);
    CHECK((b<a));
    CHECK((b<1.1));
}

TEST_CASE("operator <=") {
    Fraction a(6,3), b(6,3);
    CHECK((b<=a));
    CHECK((a<=2.0));
}

TEST_CASE("operator >=") {
    Fraction a(6,3), b(6,3);
    CHECK((b<=a));
    CHECK((a>=2.0));
}
TEST_CASE("operator ++") {
    Fraction a(1,2);
    a++;
    CHECK((a==Fraction(3,2)));
    ++a;
    CHECK((a==Fraction(5,2)));
}

TEST_CASE("operator --") {
    Fraction a(3,2);
    a--;
    CHECK((a==Fraction(1,2)));
    --a;
    CHECK((a==Fraction(-1,2)));

}

