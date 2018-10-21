#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int intAmount, decAmount, n;
    int bills[6] = {100, 50, 20, 10, 5, 2};
    int coins[5] = {50, 25, 10, 5, 1};

    scanf("%d.%d", &intAmount, &decAmount);
    cout << "NOTAS:" << endl;
    for(int i = 0; i < 6; i++){
        n = 0;
        for(int j = bills[i]; j <= intAmount; j += bills[i]) n++;   // For every time you can put the highest available bill, increase n by 1.
        cout << n << " nota(s) de R$ " << bills[i] << ".00" << endl;
        intAmount -= bills[i] * n;                                 // then subtract n from the original amount
    }
    cout << "MOEDAS:" << endl;
    cout << intAmount << " moeda(s) de R$ 1.00" << endl;
    for(int i = 0; i < 5; i++){
        n = 0;
        for(int j = coins[i]; j <= decAmount; j += coins[i]) n++;
        cout << n << " moeda(s) de R$ " << fixed << setprecision(2) << (double) coins[i]/100 << endl;
        decAmount -= coins[i] * n;
    }

} 

