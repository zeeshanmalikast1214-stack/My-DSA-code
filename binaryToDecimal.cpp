#include<iostream>
using namespace std;

int main(){
    
     int binaryNum=101010;


       int  decNum=0,power=1 ;
 
        while(binaryNum>0) {            //condition
                 int reminder=binaryNum%10;
                binaryNum=binaryNum/10;          //increment decrement 
               decNum= decNum+(reminder*power);
              power=power*2;
        }   
        cout<<" Decimal number is : "<< decNum;   
        return 0;     
} 