#include <iostream>
#include<vector>
using namespace std;

int main() {
        vector<int> vec={1,3,5,6,8,11,13};
        int size=vec.size();

        int left=0; 
        int right=size-1;
        bool found = false;
        int target=6;
        while(left<right){
             int current_sum=vec[left]+vec[right];

                 if (current_sum== target){

                  cout<<"these are  the array " <<vec[left]<< " and "<<vec[right] <<  "Equal   to target " <<target<<endl;
                  found= true;
                  break;
                 
                }
                    else if( current_sum<target){
                           left++;
                    }
                         else if( current_sum>target){
                                   right--;
                         }
                    
                            
    }
    
    if (!found) {
        cout << "There is no pair that sums up to the target value " << target << "." << endl; 
      }

    return 0;
}