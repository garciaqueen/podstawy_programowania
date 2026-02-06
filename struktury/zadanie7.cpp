#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;

struct Complex {
    double im;
    double re;
};


double abs(Complex a) {
    return sqrt(a.im * a.im + a.re * a.re);
}


Complex add_c(Complex a, Complex b) {
    Complex result;
    result.im = a.im + b.im;
    result.re = a.re + b.re;
    return result;
}

int main()
{
    Complex a;
    a.im = 4.5;
    a.re = 1.3;
    Complex b;
    b.im = 5.5;
    b.re = 2.2;
    Complex result = add_c(a, b);
    cout << result.re << endl;

    cout << abs(a);

    return 0;

}
