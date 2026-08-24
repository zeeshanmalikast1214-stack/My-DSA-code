#include<iostream>
using namespace std;

int main(){
    
     int decNum=5;


       int binary=0,power=1 ;
 
        while(decNum>0) {            //condition
                 int reminder=decNum%2;
                decNum=decNum/2;          //increment decrement 
              binary=binary+(reminder*power);
              power=power*10;
        } 
        cout<<" binary number is : "<<binary;   
        return 0;     
}
 