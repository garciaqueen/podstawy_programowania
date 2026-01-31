#include <iostream>

using namespace std;

struct Point {
  double x;
  double y;
};

void copy_t(Point points1[], Point points2[], int n) {
  for (int i = 0; i < n; i++) {
    points2[i].x = points1[i].x;
    points2[i].y = points1[i].y;
  }

}


int main() {
  Point points1[4];

  points1[0].x = 1.4;
  points1[0].y = 6.8;
  points1[1].x = 4.2;
  points1[1].y = 3.3;
  points1[2].x = 8.0;
  points1[2].y = 7.2;
  points1[3].x = 1.5;
  points1[3].y = 6.1;

  Point points2[4];

  copy_t(points1, points2, 4);

  cout << points2[3].x;
  
  return 0;
}
