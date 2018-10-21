#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double a, b, c;
    double disc;

    cin >> a >> b >> c;

    disc = b * b - 4 * a * c;
    
    if(disc < 0 || a == 0){
         cout << "Impossivel calcular" << endl;
    } else {
        cout << fixed << setprecision(5);
        cout << "R1 = " << (- b + sqrt(disc)) / (2 * a) << endl;
        cout << "R2 = " << (- b - sqrt(disc)) / (2 * a) << endl;
    }
}