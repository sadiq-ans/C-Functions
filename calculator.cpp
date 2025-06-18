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

        for (int i = 0; i <= 6; i++)
        {
            cout << "Press 1 for +" << " " << endl;
            cout << "Press 2 for -" << " " << endl;
            cout << "Press 3 for *" << " " << endl;
            cout << "Press 4 for /" << " " << endl;
            cout << "Press 5 for %" << " " << endl;
            cout << "Press 0 for Exit" << " " << endl;

            cout << "\n--------------\n";
            cout << "Enter your choice: ";
            cout << "\n--------------\n";
            cin >> choice;
            switch (choice)
            {
            case 1:
                if (choice == 1)
                {
                    cout << "Enter first number" << endl;
                    cin >> f_num;
                    cout << "Enter second number" << endl;
                    cin >> s_num;

                    cout << "\n--------------\n";
                    cout << "Addition of " << f_num << " and " << s_num << " is " << addition(f_num, s_num) << endl;
                    cout << "\n--------------\n";
                }
                break;
            case 2:
                if (choice == 2)
                {
                    cout << "Enter first number" << endl;
                    cin >> f_num;
                    cout << "Enter second number" << endl;
                    cin >> s_num;

                    cout << "\n--------------\n";
                    cout << "Substration of " << f_num << " and " << s_num << " is " << subs(f_num, s_num) << endl;
                    cout << "\n--------------\n";
                }
                break;
            case 3:
                if (choice == 3)
                {
                    cout << "Enter first number" << endl;
                    cin >> f_num;
                    cout << "Enter second number" << endl;
                    cin >> s_num;

                    cout << "\n--------------\n";
                    cout << "Multiply of " << f_num << " and " << s_num << " is " << multiply(f_num, s_num) << endl;
                    cout << "\n--------------\n";
                }
                break;
            case 4:
                if (choice == 4)
                {
                    cout << "Enter first number" << endl;
                    cin >> f_num;
                    cout << "Enter second number" << endl;
                    cin >> s_num;

                    cout << "\n--------------\n";
                    cout << "Divide of " << f_num << " and " << s_num << " is " << divide(f_num, s_num) << endl;
                    cout << "\n--------------\n";
                }
                break;
            case 5:
                if (choice == 5)
                {
                    cout << "Enter first number" << endl;
                    cin >> f_num;
                    cout << "Enter second number" << endl;
                    cin >> s_num;

                    cout << "\n--------------\n";
                    cout << "Modulus of " << f_num << " and " << s_num << " is " << modulus(f_num, s_num) << endl;
                    cout << "\n--------------\n";
                }
                break;
            default:
                if (choice > 5 || choice < 0)
                {
                    cout << "Invalid Value!";
                }
                break;
            }
        }

    } while (choice != 0);

    return 0;
}

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