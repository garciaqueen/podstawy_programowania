#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct Car {
    unsigned char register_number;
    char brand_name[15];
};

void func(Car tab[], int n, const char* path) {
    FILE* f = fopen(path, "w+");
    for (int i = 0; i < n; i++) {
        unsigned char reg_num = tab[i].register_number;
        char brand_name[15];
        strcpy(brand_name, tab[i].brand_name);
        fprintf(f, "%u, %s\n", reg_num, brand_name);  

    }
    fclose(f);
    
}

int main()
{
    Car* cars = new Car[3];
    cars[0].register_number = 45;
    strcpy(cars[0].brand_name, "Volkswagen");
    cars[1].register_number = 23;
    strcpy(cars[1].brand_name, "Tesla");
    cars[2].register_number = 98;
    strcpy(cars[2].brand_name, "Lanus");
    func(cars, 3, "cars.txt");


    delete[] cars;
    return 0;

}
