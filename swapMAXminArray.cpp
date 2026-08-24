#include <iostream>
#include<climits>
using namespace std;

 int main(){
    int size=6;
       int array[size]={100,23,17,82,18,600};

       int smallest=  INT_MAX;
       int largest=   INT_MIN;

       int smallIndex = 0;
       int largeIndex = 0;


    for(int i=0; i<size; i++){

         if( array[i] < smallest ){
              smallest= array[i];  
              smallIndex =i;       
         }

             
       }

    for( int j=0; j<size; j++){

         if( array[j] > largest ){
            largest= array[j];
            largeIndex =j;
         }
          
         
       }
             cout<<" smallest number "<< smallest  <<endl;
             cout<<" Largest number "<<   largest <<endl;
             swap( array[smallIndex] , array[largeIndex] );

                 for( int j=0; j<size; j++){
                         cout<<array[j]<<" ";// show the swap array 
       }
       return 0;
    }