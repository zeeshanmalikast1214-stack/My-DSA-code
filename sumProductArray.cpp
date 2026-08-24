#include<iostream>
using namespace std;

int main(){
          int size=6;
          int array[size]={5,6,7,8,9,10};
    int sum=0;
          for(int i=0; i<size; i++){
            sum+=array[i];
          }
    int product=1;
          for(int i=0; i<size; i++){
            product*=array[i];
          }
    int substract=0;
          for(int i=0; i<size; i++){
            substract-=array[i];
          }
cout<<"SUM :         "<<sum<<endl;
cout<<"SUBSTRACT :   "<<substract<<endl;
cout<<"PRODUCT :     "<<product<<endl;
return 0;
}