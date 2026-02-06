#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <cstring>

using namespace std;

struct Vector {
    int* data;
    int len;
};

void init(Vector& v) {
    v.data = nullptr;
    v.len = 0;
}

int& at(Vector &a, int i) {
    return a.data[i];
}

void resize(Vector& v,int size) {
    v.len = size;
}

void append(Vector & a, int v) {
    resize(a, a.len+1);
    a.data[a.len + 1] = v;
}

int size(Vector& a) {
    return a.len;
}

void clear(Vector &a) {
    delete[] a.data;
    a.data = nullptr;
    a.len = 0;
}

int main()
{
    Vector v;
    init(v);

    return 0;

}
