#include <iostream>
#include <climits>
using namespace std;

 int main(){

    int size=5;
    int num[size];
     cout<<"Enter the number in array size "<<endl;

        for(int i=0; i<size; i++){// input 

             cin>>num[i];
        }
            int biggerNum=INT_MIN; // Here a INT_MAX in - infinity where i have world smallest  number then i compare with other number 
             
         for(int j=0; j<size; j++){
                  if(num[j] > biggerNum){
                      biggerNum=num[j];
                  }
             
            }
             cout<<"The bigger number is :"<<biggerNum<<endl;
return 0;

} 