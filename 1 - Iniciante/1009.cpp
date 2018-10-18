#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int main(){
    char name[50];
    double normalWage, sellCommissions;

    cin >> name >> normalWage >> sellCommissions;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << normalWage + (0.15 * sellCommissions) << endl;

    return 0;
}