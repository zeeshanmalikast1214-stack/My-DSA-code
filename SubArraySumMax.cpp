#include <iostream>
using namespace std;

int main() {

    int arr[] = {3, -4,  -8 };// max 5, 4, -1, 7,
    int size = 7;

    for (int start = 0; start < size; start++) {

        for (int end = start; end < size; end++) {

            int sum = 0;

            for (int i = start; i <= end; i++) {

                cout << arr[i] << " ";
                sum = sum + arr[i];
            }

            cout << "  Sum = " << sum << endl;
        }
    }

    return 0;
}