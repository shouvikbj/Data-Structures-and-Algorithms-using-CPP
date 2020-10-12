#include <iostream>
using namespace std;

int fib(int num)
{
    if (num == 1 || num == 0)
    {
        return num;
    }
    else
    {
        return (fib(num - 1) + fib(num - 2));
    }
}

int main()
{
    int count, i = 0, lastValue = 0, sum = 0;
    count = 6;
    while (i < count)
    {
        cout << " " << fib(i);
        lastValue = i;
        sum += fib(i);
        ++i;
    }
    cout << endl;
    cout << "Last Value: " << lastValue << endl;
    cout << "Sum of all the printed values: " << sum << endl;

    return 0;
}