#include <iostream>
#include <cmath>
using namespace std;
class Fraction {
  public:
    Fraction();
    Fraction(int num, int den);
    int gcd(int a, int b);
    void normalise();
    // accessors
    int numerator() const;
    int denominator() const;
    // other  member functions
    Fraction sum(const Fraction& right);
    Fraction sub(const Fraction& right);
    Fraction mul(const Fraction& right);
    Fraction div(const Fraction& right);
    void write() const;
  private:
    int numerator_, denominator_;
};
Fraction::Fraction(){
    numerator_=0;
    denominator_=1;
}
int Fraction::numerator() const{
  return numerator_;
}
int Fraction::denominator() const{
  return denominator_;
}
Fraction::Fraction(int num, int den){
    numerator_ = num;
    denominator_ = den;
}

int Fraction::gcd(int a, int b) {
  while (b != 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }
  return a;
}
void Fraction::normalise() {
  int g = gcd(numerator_, denominator_);
  numerator_ /= g;
  denominator_ /= g;
  if (denominator_ < 0) {
    numerator_ = - numerator_;
    denominator_ = - denominator_;
  }
}
void Fraction::write() const {
  cout << numerator_ << '/' << denominator_;
}
Fraction Fraction::sum(const Fraction& right) {
  numerator_ = this->numerator_ * right.denominator() + right.numerator() * this->denominator_;
  denominator_ =  this->denominator_ * right.denominator();
  normalise();
  return Fraction(numerator_,denominator_);
}
Fraction Fraction::sub(const Fraction& right) {
  numerator_ = this->numerator_ * right.denominator() - right.numerator() * this->denominator_;
  denominator_ =  this->denominator_ * right.denominator();
  normalise();  
  return Fraction(numerator_,denominator_);
}
Fraction Fraction::mul(const Fraction& right) {
    numerator_ = this->numerator_ * right.numerator();
    denominator_ =  this->denominator_ * right.denominator();
    normalise();
    return Fraction(numerator_,denominator_);
}
Fraction Fraction::div(const Fraction& right) {
    numerator_ = this->numerator_ * right.denominator();
    denominator_ =  this->denominator_ * right.numerator();
    normalise();
    return Fraction(numerator_,denominator_);
}

int main(){ Fraction().sum({2, 4}).write(); cout << endl;
  return 0; }