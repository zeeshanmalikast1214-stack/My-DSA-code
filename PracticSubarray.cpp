#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    for (int start = 0; start < size; start++) {
 
        for (int end = start; end < size; end++) {

         cout<<end;  
        }
  cout<< start;
          
    }

    return 0;
}