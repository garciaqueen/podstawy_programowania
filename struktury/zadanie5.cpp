#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;

struct Point {
    double x;
    double y;
};

Point** pointsInCircle(Point tab[], int n, double a, double b, double r) {
    int len = 0;
    Point** tab1 = new Point*[n];
    for (int i = 0; i < n; i++) {
        if ((tab[i].x - a) * (tab[i].x - a) + (tab[i].y - b) * (tab[i].y - b) <= r * r) {
            tab1[len] = &tab[i];
            len++;
        }
    }

    return tab1;
    
    
}

int main()
{

    Point tab[4];
    //tab[0].x = 1.0;
    //tab[0].y = 1.0;
    //tab[1].x = 3.0;
    //tab[1].y = 1.0;
    //tab[2].x = 4.0;
    //tab[2].y = 1.0;
    //tab[3].x = 5.0;
    //tab[3].y = 1.0;
    std::srand(std::time({}));
    for (int i = 0; i < 4; i++) {
        tab[i].x = std::rand(), 50;
        tab[i].y = std::rand(), 60;
    }
    Point** tab1 = pointsInCircle(tab, 4, 1, 1, 3);

    cout << tab1[1]->x;


}
