#include <iostream>
using namespace std;
int sumDigite(int n){
   int sum=0;
    for(int  i<=n;i=1; i=i/10){
        int reminder=i%10;
        sum=sum+reminder;
    }

    return sum;
}
int main(){
int num;
cout<<"enter num "<<endl;
cin>>num; 
 
   cout<<" sum :"<< sumDigite(num);
   return 0;
}