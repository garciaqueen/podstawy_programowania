#include <iostream>
#include <cmath>

using namespace std;

struct Point {
  double x;
  double y;
};

Point initPoint(double x, double y) {
  Point p;
  p.x = x;
  p.y = y;
  return p;
}

void readPoint(Point &p) {
  cin >> p.x >> p.y;
}

double distance(Point a, Point b) {
  return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int main() {
  
  Point p1, p2;

  cout << "Spółrzędne punktu: ";
  readPoint(p1);

  cout << "Spółrzędne punktu: ";
  readPoint(p2);

  double d = distance(p1, p2);

  cout << "Odległosc między punktami: " << d << endl;
  
  return 0;
}
