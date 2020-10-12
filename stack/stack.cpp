#include <iostream>
using namespace std;

int stack[5];
int *top = stack - 1;

void push(int n)
{
    if (top == (stack + 4))
    {
        cout << "Stack  is full" << endl;
    }
    else
    {
        top++;
        *top = n;
        cout << "Pushed " << n << " into the Stack" << endl;
    }
}

int pop()
{
    if (top != (stack - 1))
    {
        int topElement = *top;
        top--;
        cout << "Popped " << topElement << endl;
        return topElement;
    }
    else
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
}

bool isEmpty()
{
    if (top == (stack - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void viewStack()
{
    int i = 0;
    while ((stack + i) != top)
    {
        cout << stack[i] << " ";
        i++;
    }
    cout << stack[i] << endl;
}

int main()
{

    cout << "1. View Stack" << endl;
    cout << "2. Push" << endl;
    cout << "3. Pop" << endl;
    cout << "4. Stop" << endl;

    while (true)
    {
        int choice;
        cout << "Enter choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (isEmpty())
            {
                cout << "Stack is empty." << endl;
            }
            else
            {
                viewStack();
            }
            break;
        case 2:
            int n;
            cout << "Enter an integer to push : ";
            cin >> n;
            push(n);
            break;
        case 3:
            pop();
            break;
        case 4:
            cout << "Bye!" << endl;
            return 0;
            break;
        default:
            cout << "Enter a valid choice!" << endl;
            break;
        }
    }

    return 0;
}