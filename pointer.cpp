#include <iostream>
using namespace std;

int main() { 
    int p=27;   // clear 
    int *ptr=12;   // pointer veriabler 
        ptr=&p; // pointer veriable point valve of p     

    cout<<   "p     ="   <<   p<<endl;
    cout<<   "*ptr   ="   <<  *ptr<<endl;
     cout<<  "ptr   ="   <<  ptr<<endl;
    cout<<   "&p    ="   <<   &p <<endl;
    return 0;
}