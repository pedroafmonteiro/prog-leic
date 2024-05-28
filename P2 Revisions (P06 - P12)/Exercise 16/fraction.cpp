class Fraction {
    public:
        Fraction();
        Fraction(int numerator, int denominator);

        int numerator();
        int denominator();

        Fraction sum(const Fraction& right);
        Fraction sub(const Fraction& right);
        Fraction mul(const Fraction& right);
        Fraction div(const Fraction& right);

        void normalise();
        void write() const;

    private:
        static int gcd(int a, int b);
        int numerator_, denominator_;
};

#include "fraction_aux.h"

Fraction::Fraction() {
    numerator_ = 0;
    denominator_ = 1;
}

Fraction::Fraction(int numerator, int denominator) {
    numerator_ = numerator;
    denominator_ = denominator;
    normalise();
}

int Fraction::numerator() {
    return numerator_;
}

int Fraction::denominator() {
    return denominator_;
}

Fraction Fraction::sum(const Fraction &right) {
    numerator_ = this->numerator_ * right.denominator_ + right.numerator_ * this->denominator_;
    denominator_ = this->denominator_ * right.denominator_;
    return Fraction(numerator_, denominator_);
}

Fraction Fraction::sub(const Fraction &right) {
    numerator_ = this->numerator_ * right.denominator_ - right.numerator_ * this->denominator_;
    denominator_ = this->denominator_ * right.denominator_;
    return Fraction(numerator_, denominator_);
}

Fraction Fraction::mul(const Fraction &right) {
    numerator_ = this->numerator_ * right.numerator_;
    denominator_ = this-> denominator_ * right.denominator_;
    return Fraction(numerator_, denominator_);
}

Fraction Fraction::div(const Fraction &right) {
    numerator_ = this->numerator_ * right.denominator_;
    denominator_ = this->denominator_ * right.numerator_;
    return Fraction(numerator_, denominator_);
}

int main() {
    return 0;
}