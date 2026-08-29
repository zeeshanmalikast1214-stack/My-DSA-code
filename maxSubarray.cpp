#include <iostream>
#include<climits>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int large_sum  =INT_MIN;
    int small_sum =INT_MAX;

    for (int start = 0; start < size; start++) {

        for (int end = start; end < size; end++) {
                   int sum=0;
            for (int i = start; i <= end; i++) {
                cout <<arr[i];

                sum=sum+arr[i];
               
            }                                              //  (int i loop)
          cout<<"   sum : "<<sum <<endl;
                       // Find smallest sum
            if (sum < small_sum ) {
                small_sum  = sum;
            }

            // Find largest sum   
            if (sum > large_sum ) {
                large_sum  = sum;
            }
        }                                                 // (int end loop)
          cout << endl;
    }                                                     // (int starts loop)
   cout << "Smallest sum = " << small_sum  << endl;
    cout << "Largest sum = " << large_sum  << endl;
    return 0;
}