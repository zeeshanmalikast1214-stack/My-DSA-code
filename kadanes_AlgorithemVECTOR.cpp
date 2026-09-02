#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {

    vector<int> vec = {2, -5, 3, 4, -2, 6};

    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int num : vec) {

        currentSum += num;

        maxSum = max(currentSum, maxSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    return 0;
}