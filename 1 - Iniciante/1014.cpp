#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int distance;
    double consumption;

    cin >> distance >> consumption;
    cout << fixed << setprecision(3) << (double) distance / consumption << " km/l" << endl;

    return 0;
}