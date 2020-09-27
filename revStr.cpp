#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "Shouvik Bajpayee";
    int i;
    for (i = (strlen(str) - 1); i >= 0; i--)
    {
        cout << str[i];
    }
    cout << endl;
    return 0;
}