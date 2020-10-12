#include <iostream>
using namespace std;

void function(int n)
{
    if (n > 0)
    {
        cout << "count " << n << endl;
        function(n - 1);
        cout << "count " << n << endl;
    }
}

int main()
{

    int n = 3;
    function(3);

    return 0;
}