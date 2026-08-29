#include <iostream>
#include<climits>
using namespace std;
 
int Max_Sum(int arr[], int  size){

    int Max_sum=INT_MIN;    //int min  is   - infinity 
    int current_sum=0;

    for( int i=0; i<size; i++){
      current_sum += arr[i];
      Max_sum=max(current_sum , Max_sum   );
       
        if(current_sum < 0 ){
        current_sum=0;
        }

    }

        return Max_sum; 
}

int main() {

  int arr[]={ 1,-6, 2, 3, -7, 4, 5, -8};

        cout<<" big sum : "<<Max_Sum( arr, 8)<<endl;
        return 0; 


}