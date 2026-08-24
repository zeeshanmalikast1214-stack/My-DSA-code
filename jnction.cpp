#include <iostream>
using namespace std;

int digitSum(int n)
{
    int sum = 0;

    for (int i = n; i > 0; i = i / 10)
    {
        int remainder = i % 10;
        sum = sum + remainder;
    }

    return sum;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Digit Sum = " << digitSum(num);

    return 0;
}