#include <iostream>
#include <iomanip>

using namespace std;

double circleArea(double r){
    return 3.14159 * (r * r);
}

int main(){
    double r;
    cin >> r;
    cout << fixed << setprecision(4) << "A=" << circleArea(r) << endl;
    return 0;
}