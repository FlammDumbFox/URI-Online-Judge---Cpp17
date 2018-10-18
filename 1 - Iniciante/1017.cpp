#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int speed, hours;
    const int efficiency = 12; // 12 km/l

    cin >> hours >> speed;
    cout << fixed << setprecision(3) << (double) speed * hours / efficiency << endl;

    return 0;
}