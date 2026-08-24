#include <iostream>
using namespace std;

int main() {

    int num[] = {5, 2, 5, 8, 2, 9, 10};
    int size = 7;

    cout << "Unique values are: ";

    for (int i = 0; i < size; i++) {

        int count = 0;
 
        for (int j = 0; j < size; j++) {

            if (num[i] == num[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << num[i] << " ";
        }
    }

    return 0;
}