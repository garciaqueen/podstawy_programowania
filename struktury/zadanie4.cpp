#include <iostream>
#include <cmath>


using namespace std;

struct Point {
    double x;
    double y;
};

void smallestLen(Point tab[], int n) {
    double len = sqrt((tab[1].x - tab[0].x) * (tab[1].x - tab[0].x) + (tab[1].y - tab[0].y) * (tab[1].y - tab[0].y));
    double len1 = 0;
    for (int i = 0; i < n-1; i++) {
        for (int l = i+1; l < n; l++) {
            len1 = sqrt((tab[l].x - tab[i].x) * (tab[l].x - tab[i].x) + (tab[l].y - tab[i].y) * (tab[l].y - tab[i].y));
            if (len1 < len) {
                len = len1;
            }
        }
    }
    cout << len;
}

int main()
{

    Point tab[4];
    tab[0].x = 0.0;
    tab[0].y = 0.0;
    tab[1].x = 3.0;
    tab[1].y = 4.0;
    tab[2].x = 1.0;
    tab[2].y = 1.0;
    tab[3].x = 10.0;
    tab[3].y = 10.0;
    smallestLen(tab, 4);
}
