#include <iostream>
using namespace std;

int power(int num, int p)
{
    int pow = 1;
    if (num <= 0)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < p; i++)
        {
            pow *= num;
        }
    }
    return pow;
}

int main()
{
    int n, p;
    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Enter the power to raise: ";
    cin >> p;

    cout << power(n, p) << endl;

    return 0;
}