#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 2, 1};
    int size = 5;

    int unique = 0;

    for (int i = 0; i < size; i++) {
        unique = unique ^ arr[i];
    }

    cout << "Unique number is: " << unique;

    return 0;
}