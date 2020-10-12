#include <iostream>
using namespace std;

int myFact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * myFact(n - 1);
    }
}

int main()
{

    int n;
    cout << "Enter a positive value: ";
    cin >> n;
    cout << "Factorial is : " << myFact(n) << endl;

    return 0;
}