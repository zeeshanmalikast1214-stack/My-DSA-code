#include <iostream>
using namespace std;

 int main(){

       int size=5;
  
       int num[size]={5,12,14,16,19};
       int target = 14;
   for(int i=0; i<size; i++){
 
      if ( num[i] == 122){         

        cout<<"the memory location   "<<i<<endl;
      }else{
        cout<<"-1";
        break;
      }
   }

        
        
return 0;

} 