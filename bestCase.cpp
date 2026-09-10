#include<iostream>
using namespace std;
int main(){   
int size;
 cout<<"Enter the size of array "<<size<<endl;
 cin>>size;
  int arr[size];
     
  for(int i=0; i<size; i++ ){
         cin>>arr[i];
  }
    
        for(int j=0; j<size; j++ ){
         cout<< arr[j] << endl;
        }
    return 0;
}