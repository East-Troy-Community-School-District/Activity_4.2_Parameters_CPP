/*
Hash Pyramid
Pawelski
4/27/2023
C++
*/

#include <iostream>

/// <summary>
/// Builds a pyramid in the console consisting of hashes. The pyramid
/// will always be 5 rows tall.
/// </summary>
void BuildSmallPyramid()
{
    std::cout << "    #\n";
    std::cout << "   # #\n";
    std::cout << "  # # #\n";
    std::cout << " # # # #\n";
    std::cout << "# # # # #\n";
}

/// <summary>
/// Builds a pyramid in the console consisting of hashes.
/// </summary>
/// <param name="height">Height (rows) of the pyramid.</param>
void BuildPyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = height - 1; j > i; j--)
        {
            std::cout << " ";    // places the spaces before the symbols on a line
        }
        for (int j = 0; j <= i; j++)
        {
            std::cout << "# ";   // places the symbols on a line
        }
        std::cout << "\n";       // advances to the next line
    }
}

int main()
{
    BuildSmallPyramid();
    std::cout << std::endl;
    BuildPyramid(5);
    std::cout << std::endl;
    BuildPyramid(10);
    std::cout << std::endl;
    return 0;
}
