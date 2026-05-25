#include <iostream>

int main()
{
    // Description variable
    int num1;
    int num2;
    char operation;
    int quit=1;

    while (quit)
    {
        // We are receiving input from the user.
        std::cout << "Enter the first num";
        std::cin >> num1;

        std::cout << "Enter the second num";
        std::cin >> num2;

        std::cout << "Enter the operation.(+,-,x,)";
        std::cin >> operation;

        // Operation control
        if (operation == '+')
        {
            std::cout << num1 + num2<<"\n";
        }
        else if (operation == '-')
        {
            std::cout << num1 - num2<<"\n";
        }
        else if (operation == 'x')
        {
            std::cout << num1 * num2<<"\n";
        }
        else
        {
            std::cout << "Please enter a valid transaction.";
        }

        std::cout<<"Press 0 to exit, press 1 to continue.";
        std::cin >> quit;
    }

    return 0;
}