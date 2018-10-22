#include <iostream>
#include <vector>

using namespace std;

int findMinimum(vector<int> v){
    int min;
    int index = 1;
    for(int i = 0; i < v.size(); i++){
        if(i == 0)
            min = v.at(0);
        if(v.at(i) < min){
            index = i + 1;
            min = v.at(i);
        }
    }
    return index;
}
