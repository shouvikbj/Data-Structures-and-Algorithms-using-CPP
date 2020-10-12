#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{

    int count = 0;
    string str;
    cout << "Enter a String : " << endl;
    // cin >> str;
    getline(cin, str);
    count = str.size();
    cout << "Number of Characters : " << count << endl;

    return 0;
}