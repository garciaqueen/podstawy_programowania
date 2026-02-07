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

void init(Vector* v) {
    v->data = nullptr;
    v->len = 0;
}

int& at(Vector& a, int i) {
    return a.data[i];
}

void resize(Vector* v, int size) {
    int* new_data = new int[size];
    for (int i = 0; i < v->len; i++) {
        new_data[i] = v->data[i];
    }
    delete[] v->data;
    v->data = new_data;
    v->len = size;
    
}

void append(Vector* v, int value) {
    // add a new alement at the end
    // we have a table with a certain amount of elements
    // we resize and add the element at the end
    resize(v, (v->len + 1));
    v->data[v->len-1] = value;
}

int size(Vector& a) {
    return a.len;
}

void clear(Vector* a) {
    delete[] a->data;
    a->data = nullptr;
    a->len = 0;
}

int main()
{
    Vector* v = new Vector;
    init(v);
    append(v, 5);
    append(v, 2);
    append(v, 7);
    cout << v->data[2];
    return 0;

}
