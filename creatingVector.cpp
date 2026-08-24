#include <iostream>
#include<vector>
using namespace std;

 int main(){
 
    vector<int> vec;

 vec.push_back(0);
 vec.push_back(1);
 vec.push_back(2);
 vec.push_back(3);



    cout<<  "Capacity  "   << vec.capacity() << endl;
    cout<<  "Size "   << vec.size()     << endl;

     vec.push_back(4);

    cout<<  "Capacity   "   << vec.capacity() << endl;
    cout<<  "Size  "   << vec.size()     << endl;

    for(int i: vec){
      cout << i << endl;
    }
    
       return 0;
    }