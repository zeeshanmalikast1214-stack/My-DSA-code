#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    for(int i =1; i<=10; i++){
    vec.push_back(i);
  
  }
  cout<<" capacity of vector :   " << vec.capacity()  <<endl;
  cout<<" Size of vector     :   " << vec.size()      <<endl;
for( int num : vec){

       cout<< num<<" ";

}
    return 0; 
}