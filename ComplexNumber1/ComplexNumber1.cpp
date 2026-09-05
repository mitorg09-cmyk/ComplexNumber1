#include <iostream>
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

}