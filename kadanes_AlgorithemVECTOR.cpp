#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> vec = {2, -5, 3, 4, -2, 6};
    int size = vec.size();

    int Max_sum = INT_MIN;
    int current_sum = 0;

    for (int i = 0; i < size; i++) {

        current_sum += vec[i];

        Max_sum = max(current_sum, Max_sum);

        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    cout << "big sum : " << Max_sum << endl;

    return 0;
}