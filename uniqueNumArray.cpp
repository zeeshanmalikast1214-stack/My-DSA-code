#include<iostream>
using namespace std;
int main(){
  
    int array[]={1,2,3,2,3};
      int size=5;
    cout<<"The array we have "<<endl;

       cout<<" the value is  given"<<endl;

                        // to print we use nusted loop and in first loop we just print the given array just like a coloum to table  
    for (int  i=0; i<size; i++){

           
                       //now inner loop it run 5 time for each i 
                        int count=0;
        for(int  j=0; j<size; j++){
                    
            if( array[i]==array[j]){

                 count++;
            }   

        }

                if(count==1){

                    cout<<array[i]<<" ";
                }
    }
    return 0;
}