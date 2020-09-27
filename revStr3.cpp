#include <iostream>
#include <cstring>
using namespace std;

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *str)
{
    int i = 0, j = (strlen(str) - 1);

    while (i < j)
    {
        swap(&str[i], &str[j]);
        i++;
        j--;
    }
}

int main()
{

    char string[] = "Shouvik Bajpayee";
    reverse(string);
    for (int i = 0; i < strlen(string); i++)
    {
        cout << string[i];
    }
    cout << endl;

    return 0;
}