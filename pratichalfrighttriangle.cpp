#include <iostream>
using namespace std;

int main() { 
    int size=5;
    for(int i=0; i<size; i++){    // rows

        for(int j=0; j<size-i; j++){    // spacee


            for(int k=0; k<i; k++){    // star**
            cout<<"*";

            }


         }


      cout<<endl;
    }
}










