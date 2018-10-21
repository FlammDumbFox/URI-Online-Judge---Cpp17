#include <iostream>

using namespace std;

long long s(int n){
    if(n == 0) return 1;
    if(n == 1) return 0;
    return (n - 1) * (s(n - 1) + s(n - 2));
}

int main(){
    for(int n = 0; n < 20; n++) cout << n << " -> !" << n << " = " << s(n) << endl;    
}