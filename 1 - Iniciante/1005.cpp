#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(5) << "MEDIA = " << (3.5 * a + 7.5 * b)/11 << endl;
    return 0;
}