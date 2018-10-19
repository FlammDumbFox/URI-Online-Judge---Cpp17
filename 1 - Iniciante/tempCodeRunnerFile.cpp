#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int t;

    cin >> t;
    
    int h, min, s;

    h = trunc(t / 3600);
    t %= 3600;
    min = trunc(t / 60);
    t %= 60;
    s = t;

    cout << h << ":" << min << ":" << s << endl;

}