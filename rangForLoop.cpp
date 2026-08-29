#include <iostream>
#include <vector>
#include <algorithm>

// i remome some useless code 
using namespace std;

int main() {

    vector<int> vec = {2, -5, 3, 4, -2, 6};
    for(auto num : vec){
      num++;
        cout <<num<<" ";
    }


    return 0;}