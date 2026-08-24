// in thia code i  reverse of array 
#include <iostream>
using namespace std;
int main(){

    int size=6;

int marks[size]={5,6,7,8,9,10};

    
        
cout<<"marks the marks you enter : "<<endl;
     
for (int j=size-1; j>=0; j--)  
       {
          cout<<marks[j]<<endl;
       }
return 0;
}