#include <iostream>
using namespace std;

int addition(int a, int b);
int subs(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulus(int a, int b);

int main()
{
    int choice, f_num, s_num;

    do
    {
        cout << "\n----- Calculator Menu -----\n";
        cout << "Enter 1 for Addition (+)\n";
        cout << "Enter 2 for Subtraction (-)\n";
        cout << "Enter 3 for Multiplication (*)\n";
        cout << "Enter 4 for Division (/)\n";
        cout << "Enter 5 for Modulus (%)\n";
        cout << "Enter 0 to Exit\n";
        cout << "----------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5)
        {
            cout << "Enter first number: ";
            cin >> f_num;
            cout << "Enter second number: ";
            cin >> s_num;
        }

        switch (choice)
        {
        case 1:
            cout << "Result: " << f_num << " + " << s_num << " = " << addition(f_num, s_num) << endl;
            break;
        case 2:
            cout << "Result: " << f_num << " - " << s_num << " = " << subs(f_num, s_num) << endl;
            break;
        case 3:
            cout << "Result: " << f_num << " * " << s_num << " = " << multiply(f_num, s_num) << endl;
            break;
        case 4:
            if (s_num != 0)
                cout << "Result: " << f_num << " / " << s_num << " = " << divide(f_num, s_num) << endl;
            else
                cout << "Error: Division by zero is not allowed.\n";
            break;
        case 5:
            if (s_num != 0)
                cout << "Result: " << f_num << " % " << s_num << " = " << modulus(f_num, s_num) << endl;
            else
                cout << "Error: Modulus by zero is not allowed.\n";
            break;
        case 0:
            cout << "Exiting the calculator. Thank you!\n";
            break;
        default:
            cout << "Invalid choice! Please enter a number between 0 to 5.\n";
        }

    } while (choice != 0);

    return 0;
}

// Function Definitions
int addition(int a, int b)
{
    return a + b;
}

int subs(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int modulus(int a, int b)
{
    return a % b;
}