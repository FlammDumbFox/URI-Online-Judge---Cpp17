#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct p{
    double x, y;
} Point;

int main(){
    Point a, b;
    
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;

    cout << fixed << setprecision(4) << sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2)) << endl;

    return 0;
}