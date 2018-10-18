#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int amount, n;
    int bills[7] = {100, 50, 20, 10, 5, 2, 1};

    cin >> amount;
    cout << amount << endl;
    for(int i = 0; i < 7; i++){
        n = 0;
        for(int j = bills[i]; j <= amount; j += bills[i]) n++;   // For every time you can put the highest available bill, increase n by 1.
        cout << n << " nota(s) de R$ " << bills[i] << ",00" << endl;
        amount -= bills[i] * n;                                 // then subtract n from the original amount
    }
}