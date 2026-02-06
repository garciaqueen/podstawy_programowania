#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>


using namespace std;

struct vec2d {
    double x;
    double y;
};

vec2d oppos() {
    vec2d v;
    v.x = 2.0 * (rand() / double(RAND_MAX)) - 1.0;
    v.y = -v.x;
    return v;
}

void print(vec2d x) {
    cout << x.x << " " << x.y << '\n';
}

bool cmpY(const vec2d& a, const vec2d& b) {
    return a.y > b.y;
}

bool compX(const vec2d& a, const vec2d& b) {
    return a.x < b.x;
}

int main()
{
    std::srand(std::time(nullptr));
    vec2d* tab = new vec2d[3];
    std::generate(tab, tab + 3, oppos);

    std::for_each(tab, tab+3, print);

    std::sort(tab, tab+3, cmpY);

    std::for_each(tab, tab + 3, print);

    vec2d* it = min_element(tab, tab + 3, compX);

    print(*it);
    return 0;

}
