#include <iostream>
#include <iomanip>

using namespace std;

double sphereVolume(double r){
    return 4.0 * 3.14159 * r * r * r / 3;
}

int main(){
    double r;

    cin >> r;
    cout << "VOLUME = " << fixed << setprecision(3) << sphereVolume(r) << endl;

    return 0;
}