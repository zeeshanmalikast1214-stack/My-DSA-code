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
            int smallNum=INT_MAX; // Here a INT_MAX in + infinity where i have world biggest number then i compare with other number 
             
            for(int j=0; j<size; j++){
                  if(num[j] < smallNum){
                      smallNum=num[j];
                  }
             
            }
             cout<<"The small number is :"<<smallNum<<endl;
return 0;

} 