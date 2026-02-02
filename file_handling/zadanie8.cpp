#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <cstdio>

using namespace std;

struct Complex {
    float re;
    float im;

};



int main()
{
    short n = 5;
    Complex* tab = new Complex[n];
    tab[0].re = 1.0;
    tab[0].im = 2.0;
    tab[1].re = -3.5;
    tab[1].im = 0.0;
    tab[2].re = 0.0;
    tab[2].im = -4.2;
    tab[3].re = 7.1;
    tab[3].im = 8.9;
    tab[4].re = -1.0;
    tab[4].im = 1.0;

    FILE* f = fopen("matrix.txt", "wb");

    fwrite(&n, sizeof(short), 1, f);

    fwrite(tab, sizeof(Complex), n, f);
    fclose(f);
    
    Complex* tab2 = new Complex[n];

    FILE* fp = fopen("matrix.txt", "rb");
    fread(&n, sizeof(short), 1, fp);
    fread(tab2, sizeof(Complex), n, fp);

    // Check
    cout << tab2[3].im;
    fclose(fp);
    return 0;
}

