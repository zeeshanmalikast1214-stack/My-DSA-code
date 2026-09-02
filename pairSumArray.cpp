#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int array[]={2,7,11,15}; 
    int size=4; 
    int target; 
    cout<<"Enter the target "<<endl;
    cin>>target; 
    bool found=false;
        for( int i=0; i<size; i++){

            for(int j=i+1; j<size; j ++){
                     if(array[i]+array[j]==target)  {

                         cout << "the sum of array  " <<array[i]<< " and  " <<array[j]<<endl;
                         cout<<" Equal to target "<<target<<endl; 
                        }
                             

            }
    if (!found) {
        cout << "There is no pair that sums up to the target value " << target << "." << endl;
    }

        }

     return 0; 
}