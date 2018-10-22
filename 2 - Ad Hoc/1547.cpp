#include <iostream>
#include <vector>

using namespace std;

int findMinimum(vector<int> v){
    int min = v.at(0);
    int index = 1;
    for(int i = 1; i < v.size(); i++){
        if(min == 0) return index;
        if(v.at(i) < min){
            index = i + 1;
            min = v.at(i);
        }
    }
    return index;
}

// Idea: create a vector of differences and find the minimal element in the vector.
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int amount, number;
        vector<int> v;

        cin >> amount >> number;

        for(int j = 0; j < amount; j++){
            int k;
            cin >> k;
            v.push_back(abs(k - number));
        }
        cout << findMinimum(v) << endl;
    }
}