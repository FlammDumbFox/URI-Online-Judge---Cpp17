#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a;
    vector<int> b;
    
    for(int i = 0; i < 3; i++){
        int q;
        cin >> q;
        a.push_back(q);
        b.push_back(q);
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < 3; i++){
        cout << a.at(i) << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << b.at(i) << endl;
    }
}