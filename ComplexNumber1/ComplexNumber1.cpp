#include <iostream>
#include <cmath>
using namespace std;

struct complex
{
    double re, im;

    void complexInput();
    void complexOutput();

    bool isEqual(complex);
    double mod();
    complex sum(complex);
    complex sub(complex);
    complex mult(complex);
    complex div(complex);   
};

int main()
{
    
}

complex complex::sum(complex x)
{
    complex res;
    res.re = re + x.re;
    res.im = im + x.im;
    return res;
}

void complex::complexInput()
{
    cout << "re:";
    cin >> re;
    cout << "im:";
    cin >> im;
}

void complex::complexOutput()
{
    cout << re << " + " << im << "i";
}

bool complex::isEqual(complex x)
{
    if (re == x.re && im == x.im)
    {
        return true;
        sqrt(12);
    }
    return false;
}

double complex::mod()
{
    return sqrt(re*re + im*im);
}

complex complex::sub(complex x)
{
    complex ans;
    ans.re = re - x.re;
    ans.im = im - x.im;
    return ans;
}

complex complex::mult(complex x)
{
    complex ans;
    ans.re = re * x.re - im * x.im;
    ans.im = re * x.im + im * x.re;
    return ans;
}

complex complex::div(complex x)
{
    complex ans;
    ans.re = (re * x.re + im * x.im)    
}