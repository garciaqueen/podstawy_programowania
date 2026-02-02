#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <cstdio>

using namespace std;

struct Matrix {
    int s;
    int w;
    float tab[10][10];

};

void write_bin_mat(const char* path, Matrix m) {

    FILE* f = fopen(path, "wb");
    fwrite(&m.s, sizeof(int), 1, f);
    fwrite(&m.w, sizeof(int), 1, f);
    for (int i = 0; i < m.w; i++) {
        fwrite(m.tab[i], sizeof(float), m.s, f);
    }

    fclose(f);

}

void read_bin_mat(const char* path, Matrix& m) {
    FILE* f = fopen(path, "rb");
    fread(&m.s, sizeof(int), 1, f);
    fread(&m.w, sizeof(int), 1, f);
    float tab1[10][10];
    for (int i = 0; i < m.w; i++) {
        fread(&tab1[i], sizeof(float), m.s, f);
    }
    cout << m.s << " " << m.w;
    cout << "\n";
    for (int i = 0; i < m.w; i++) {
        for (int l = 0; l < m.s; l++) {
            cout << tab1[i][l] << " ";
        }
        cout << "\n";
    }
    fclose(f);
}


int main()
{

    Matrix m;

    m.s = 5;
    m.w = 3;
    m.tab[0][0] = 1.0;
    m.tab[0][1] = 2.0;
    m.tab[0][2] = 3.0;
    m.tab[0][3] = 4.0;
    m.tab[0][4] = 5.0;
    m.tab[1][0] = 6.0;
    m.tab[1][1] = 7.0;
    m.tab[1][2] = 8.0;
    m.tab[1][3] = 9.0;
    m.tab[1][4] = 0.0;
    m.tab[2][0] = 3.0;
    m.tab[2][1] = 5.0;
    m.tab[2][2] = 7.0;
    m.tab[2][3] = 9.0;
    m.tab[2][4] = 1.0;

    write_bin_mat("matrix.txt", m);

    read_bin_mat("matrix.txt", m);
}
