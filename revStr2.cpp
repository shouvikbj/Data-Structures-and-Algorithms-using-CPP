#include <iostream>
#include <cstring>
using namespace std;

void reverse(char str[])
{
    int i;
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    cout << endl;
}

int main()
{

    char string[] = "Shouvik Bajpayee";
    reverse(string);

    return 0;
}