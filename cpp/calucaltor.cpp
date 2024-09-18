#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter Your Value of a ";
    cin >> a;

    cout << "Enter Your Value of b ";
    cin >> b;

    char op;
    cout << "Enter Your Want to Perform ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;

    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "enter valid operation";
    }
}