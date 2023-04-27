/*
Calculator
Pawelski
4/27/2023
C++
*/

#include <iostream>

/// <summary>
/// Adds the given numbers together and displays the result to the console.
/// </summary>
/// <param name="num1">First number to add.</param>
/// <param name="num2">Second number to add.</param>
void Add(int num1, int num2)
{
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
}

// add a function for subtractiong

// add a function for multiplication

/// <summary>
/// Divides the given numbers and displays the result to the console.
/// </summary>
/// <param name="num1">Numerator.</param>
/// <param name="num2">Denominator. Should be non-zero.</param>
void Divide(int num1, int num2)
{
    std::cout << num1 << " / " << num2 << " = " << (double) num1 / num2 << "\n";
}

int main()
{
    int num1, num2;
    std::string operation, repeat = "y";
    while (repeat == "y")
    {
        std::cout << "What operation do you want to perform? "
            << "(+, -, *, /) >> ";
        std::cin >> operation;
        if (operation == "+" || operation == "-" || operation == "*" || operation == "/")
        {
            std::cout << "Enter the first number >> ";
            std::cin >> num1;
            std::cout << "Enter the second number >> ";
            std::cin >> num2;
            if (operation == "+")
            {
                Add(num1, num2);
            }
            else if (operation == "-")
            {
                // call needed here!
            }
            else if (operation == "*")
            {
                // call needed here!
            }
            else if (operation == "/")
            {
                // call needed here!
            }
        }
        else
        {
            std::cout << "Invalid operation. Enter either +, -, *, or /.\n";
        }
        std::cout << "Would you like to enter another operation? (y/n) >> ";
        std::cin >> repeat;
        std::cout << std::endl;
    }
    return 0;
}
