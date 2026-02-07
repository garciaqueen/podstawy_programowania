#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;


struct City {
    char city_name[40];
    unsigned int pop;
    double x;
    double y;
};

int main()
{
    FILE* f = fopen("city.csv", "r");

    int c;
    int num = 0;
    while ((c=fgetc(f) )!= EOF) {
        if (c == '\n') {
            num++;
        }
    }

    City* cities = new City[num-1];
    rewind(f);
    char headers[4][50];
    fscanf(f, "%49[^,],%49[^,],%49[^,],%49[^\n]\n", headers[0], headers[1], headers[2], headers[3]);
    for (int i = 0; i < num-1; i++) {
        char name[50];
        unsigned int pop = 0;
        double x, y;
        fscanf(f, "%49[^,],%u,%lf,%lf\n", name, &pop, &x, &y);
        strcpy(cities[i].city_name, name);
        cities[i].pop = pop;
        cities[i].x = x;
        cities[i].y = y;
    }
    fclose(f);
    cout << cities[2].pop;

    return 0;

}
