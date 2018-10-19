#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int t;

    cin >> t;
    
    int a, m, d;

    a = trunc(t / 365);
    t %= 365;
    m = trunc(t / 30);
    t %= 30;
    d = t;

    cout << a << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;

}