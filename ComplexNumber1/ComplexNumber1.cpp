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
    complex forTestComplex, forTestComplex_2;
    
    forTestComplex.complexInput();
    forTestComplex_2.complexInput();
    forTestComplex.complexOutput();
    forTestComplex_2.complexOutput();

    cout << forTestComplex.isEqual(forTestComplex_2) << "\n";
    cout << forTestComplex.mod() << "\n";
    
    forTestComplex = forTestComplex.sum(forTestComplex_2);
    forTestComplex.complexOutput();

    forTestComplex = forTestComplex.sub(forTestComplex_2);
    forTestComplex.complexOutput();

    forTestComplex = forTestComplex.mult(forTestComplex_2);
    forTestComplex.complexOutput();

    forTestComplex = forTestComplex.div(forTestComplex_2);
    forTestComplex.complexOutput();
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
    if (im >= 0)
    {
        cout << re << " + " << im << "i\n";
    }
    else
    {
        cout << re << " - " << fabs(im) << "i\n";
    }
}

bool complex::isEqual(complex x)
{
    if (re == x.re && im == x.im)
    {
        return true;
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
    if (!x.re && !x.im) exit;

    double denom = x.re * x.re + x.im * x.im;
    ans.re = (re * x.re + im * x.im) / denom;
    ans.im = (im * x.re - re * x.im) / denom;

    return ans;
}