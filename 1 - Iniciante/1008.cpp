#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int employeeNumber, workedHours;
    double wagePerHour;

    cin >> employeeNumber >> workedHours >> wagePerHour;
    cout << "NUMBER = " << employeeNumber << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << wagePerHour * workedHours << endl;

    return 0;
}