
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main() {
     vector<int>num= {1, 3, 2, 1, 2,1,3,1,1,1};
    auto size =num.size();

    // sort    
    sort(num.begin() , num.end() );

    //frequency
    int frequency=0;
    bool found = false;
         for(int i=0; i<size; i++){

                 if (  i >0 && num[i]==num[i-1]   ){
                    frequency++;
                    }else{
                            frequency=1;
                         
                      }
               
                if(frequency>size/2){
                    found=true;
                   cout<<" The majority number   "  <<  num[i]<<endl;
                   cout<<" The  number repeat    "  <<  frequency<<endl;
                   break;
                }
                    
            }

                if (!found) {
                     cout << "No majority element found." << endl;
                    } 

  return 0;
}