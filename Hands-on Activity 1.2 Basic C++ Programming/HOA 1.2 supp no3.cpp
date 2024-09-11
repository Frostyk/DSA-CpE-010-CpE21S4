#include <iostream>
#include <cmath>
using namespace std;

double distanceBetweenPoints(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); }
int main() {   
 // Calculate distance between two points
    double x1 = 1, y1 = 3, x2 = 5, y2 = 10;
    double distance = distanceBetweenPoints(x1, y1, x2, y2);
    cout << "Distance between points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << "): " << distance << endl;

    return 0;
}



