#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int num, base, combination;
    cout << "Enter a number to find combination: ";
    cin >> num;
    cout << "Enter the base: ";
    cin >> base;

    combination = ((fact(num)) / (fact(base) * fact(num - base)));

    cout << combination << endl;

    return 0;
}