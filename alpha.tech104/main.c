#include<stdio.h>
#include<stdlib.h>

///rational number struct //

typedef struct rational{
int numerator;
int denominator;
}Rational;

///increment
void rationalincrement(Rational* rptr){
    (*rptr).numerator=(*rptr).numerator+(*rptr).denominator;
}
///decrement
void rationaldenominator(Rational* rptr){
    (*rptr).numerator=(*rptr).numerator-(*rptr).denominator;
}
///addition
Rational rationaladdition(Rational r1,Rational r2)
{
    Rational result;
    result.denominator=r1.denominator*r2.denominator;
    result.numerator=r1.numerator*r2.denominator+r2.numerator*r1.denominator;
    return result;
}
///subtraction
Rational rationalsubtraction(Rational r1,Rational r2)
{
    Rational result;
    result.denominator=r1.denominator*r2.denominator;
    result.numerator=r1.numerator*r2.denominator-r2.numerator*r1.denominator;
    return result;
}
///multiplication
Rational rationalmultiplication(Rational r1,Rational r2)
{
    Rational result;
    result.denominator=r1.denominator*r2.denominator;
    result.numerator=r1.numerator*r2.numerator;
    return result;
}
///division
Rational rationaldivision(Rational r1,Rational r2)
{
    Rational result;
    result.denominator=r1.denominator*r2.numerator;
    result.numerator=r1.numerator*r2.denominator;
    return result;
}

int main()
{
    Rational r1={3,4},r2={1,2};
    Rational r3=rationalsubtraction(r1,r2);
    printf("the result is %d\n",r3);
    return 0;
}
