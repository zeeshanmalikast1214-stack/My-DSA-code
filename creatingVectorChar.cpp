#include <iostream>
#include<vector>
using namespace std;

 int main(){
 
    vector<char> vec={ 'A', 'B', 'C'};
    cout<<"size  : "<<vec.size()<<endl;
   for(char i : vec) {

    cout << i <<" " ;
     }
       return 0;
    }