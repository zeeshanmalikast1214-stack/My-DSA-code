#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);

  cout<<" capacity of vector :   " << vec.capacity()  <<endl;
  cout<<" Size of vector     :   " << vec.size()      <<endl;
for( int num : vec){

       cout<< num<<" ";

}
    return 0; 
}