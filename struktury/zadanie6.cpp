
#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;

struct Matrix3x3 {
    double x1;
    double x2;
    double x3;
    double y1;
    double y2;
    double y3;
    double z1;
    double z2;
    double z3;
};

void print_m(Matrix3x3 mat) {
    cout << mat.x1 << " " << mat.x2 << " " << mat.x3 << endl;
    cout << mat.y1 << " " << mat.y2 << " " << mat.y3 << endl;
    cout << mat.z1 << " " << mat.z2 << " " << mat.z3 << endl;
}

Matrix3x3 add_m(Matrix3x3 mat1, Matrix3x3 mat2) {
    Matrix3x3 mat3;
    mat3.x1 = mat1.x1 + mat2.x1;
    mat3.x2 = mat1.x2 + mat2.x2;
    mat3.x3 = mat1.x3 + mat2.x3;
    mat3.y1 = mat1.y1 + mat2.y1;
    mat3.y2 = mat1.y2 + mat2.y2;
    mat3.y3 = mat1.y3 + mat2.y3;
    mat3.z1 = mat1.z1 + mat2.z1;
    mat3.z2 = mat1.z2 + mat2.z2;
    mat3.z3 = mat1.z3 + mat2.z3;

    return mat3;
}


int main()
{
    
    Matrix3x3 mat1;

    mat1.x1 = 1;  mat1.x2 = 2;  mat1.x3 = 3;
    mat1.y1 = 4;  mat1.y2 = 5;  mat1.y3 = 6;
    mat1.z1 = 7;  mat1.z2 = 8;  mat1.z3 = 9;

    Matrix3x3 mat2;

    mat2.x1 = 1;  mat2.x2 = 2;  mat2.x3 = 3;
    mat2.y1 = 4;  mat2.y2 = 5;  mat2.y3 = 6;
    mat2.z1 = 7;  mat2.z2 = 8;  mat2.z3 = 9;
    Matrix3x3 mat3 = add_m(mat1, mat2);
    print_m(mat3);
    return 0;

}
