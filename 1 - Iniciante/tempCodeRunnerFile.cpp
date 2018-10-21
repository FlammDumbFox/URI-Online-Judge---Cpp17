#include <iostream>
#include <iomanip>

using namespace std;

int countDivisors(int l){
    long long k = (long long) l;
    if(k == 1) return 1;
    int d = 0;
    long long divisor = 1;
    while(divisor <= (k / 2) + 1){
        if(k % divisor == 0) d++;
        divisor += 1;
    }
    return divisor % 1000000007;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k;  // Number from which we are going to work
        cin >> k;
        cout << countDivisors(k) << endl;
    }
}