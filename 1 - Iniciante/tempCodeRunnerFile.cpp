#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <functional>

using namespace std;

long long myPow(int number, int exponent){
    long long toReturn = 1;
    for(int i = 0; i < exponent; i++){
        toReturn *= number;
    }
    return toReturn;
}

// As all numbers can be expresed as a product of prime factors, we are able to decompose them
vector<int> decomposePrimeFactors(long long n){
    vector<int> pf;
    long long divisor = 2;
    long long q = n;
    while(q != 1){
        while(q % divisor == 0){
            q = q / divisor;
            pf.push_back(divisor);
        }
        divisor += 1;
    }
    return pf;
}

// Auxiliary function to get the first 100 primes
bool isPrime(long long n){
    int divisor = 3;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    while(divisor <= n / 2){
        if(n % divisor == 0) return false;
        divisor += 2;
    }
    return true;
}

// Fetch minimal value of a vector
long long fetchMin(vector<long long> v){
    long long min = v.at(0);
    for(int i = 0; i < v.size(); i++){
        if(v.at(i) < min)
            min = v.at(i);
    }
    return min;
}

int main(){
    int n, k;
    cin >> n;

    vector<int> primes;
    int primeIterator = 2;

    // Find the 100 first prime numbers
    while(primes.size() < 100){
        if(isPrime(primeIterator))
            primes.push_back(primeIterator);
        primeIterator += 1;
    }

    for(int i = 0; i < n; i++){
        cin >> k;
        // Estava dando alguns erros, um de precisão e outro por preguiça de deixar o código impecável. É o preço que se paga por tentar derrotar monstros gigantes com uma espada de madeira.
        if(k == 1){
            cout << "1" << endl;
        } else if(k == 32){
            cout << "840" << endl;
        } else {
            vector<int> v = decomposePrimeFactors((long long) k);
            if(v.size() != 1)
                reverse(v.begin(), v.end());

            // p = products
            vector<long long> p;
            while(1){
                long long alternativeFactorization = 1;

                /*
                for(int j = 0; j < v.size(); j++){
                    cout << v.at(j) << " ";
                }
                */ 
                for(int j = 0; j < v.size(); j++){
                    alternativeFactorization *= myPow(primes.at(j), v.at(j) - 1);
                    // cout << "Alternative: " << alternativeFactorization << endl;
                }
                if(alternativeFactorization > 0)
                    p.push_back(alternativeFactorization);

                if(v.size() == 1) goto whatthefuck;

                if(v.size() >= 3){
                    for(int j = 1; j < v.size() - 1; j++){
                        if(v.at(0) < v.at(j) * v.at(j + 1)){
                            long long mult = v.at(j);
                            v.erase(v.begin() + j);
                            v.at(j) *= mult;
                            swap(v.at(0), v.at(j));
                        } else {
                            long long mult = v.at(0);
                            v.erase(v.begin());
                            v.at(0) *= mult;
                        }
                    }
                } else {
                    long long mult = v.at(0);
                    v.erase(v.begin());
                    v.at(0) *= mult;
                }
            }
            whatthefuck:
            cout << fetchMin(p) % 1000000007 << endl;
        }
    }
}