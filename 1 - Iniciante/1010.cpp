#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

typedef struct item{
    int code;
    int amount;
    double price;
} Item;

int main(){
    Item a, b;

    cin >> a.code >> a.amount >> a.price;
    cin >> b.code >> b.amount >> b.price;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (a.amount * a.price) + (b.amount * b.price) << endl;

    return 0;
}