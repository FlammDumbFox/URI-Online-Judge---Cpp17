#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int id, amount;
    
    double food[5] = {4, 4.5, 5, 2, 1.5};

    cin >> id >> amount;
    cout << "Total: R$ " << fixed << setprecision(2) << amount * food[id - 1] << endl;
}