#include <iostream>

using namespace std;

int main(){
    unsigned int a, b;
    while(scanf("%u", &a) != EOF){
        scanf("%u", &b);
        printf("%u\n", a ^ b);
    }
}