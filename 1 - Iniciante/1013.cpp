#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int findHighest(int a, int b){
    return (a + b + abs(a - b)) / 2;
}

int main(){
    int a, b, c;

    cin >> a >> b >> c;
    cout << findHighest(a, findHighest(b, c)) << " eh o maior" << endl;

    return 0;
}