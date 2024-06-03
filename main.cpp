
#include <iostream>
using namespace std;

// Function to print rectangular pattern
void rectangularPattern()
{
    int rows, columns;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    cout << "Enter the no. columns: ";
    cin >> columns;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}

// Function to print hollow rectangular pattern
void hollowRectangularPattern()
{
    int rows, columns;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    cout << "Enter the no. columns: ";
    cin >> columns;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                cout << '*';
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Function to print inverted half pyramid
void invertedHalfPyramid()
{
    int rows;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            cout << '*';
        }
        cout << endl;
    }
}

// Function to print half pyramid after 180 degree rotation
void halfPyramidRotation()
{
    int rows;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j <= rows - i)
            {
                cout << " ";
            }
            else
            {
                cout << '*';
            }
        }
        cout << endl;
    }
}

// Function to print half pyramid using numbers
void halfPyramidNumbers()
{
    int num;
    cout << "Enter the num: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

// Function to print Floyd's triangle
void floydsTriangle()
{
    int rows;
    int count = 1;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

// Function to print butterfly pattern
void butterflyPattern()
{
    int rows;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * i - 2 * rows;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int m = 1; m <= i; m++)
        {
        }
        cout << endl;
    }
}

// Function to print inverted pattern
void invertedPattern()
{
    int rows;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            cout << rows - j + 1 << " ";
        }
        cout << endl;
    }
}

// Function to print 0-1 pattern
void zeroOnePattern()
{
    int rows;
    cout << "enter the no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

// Function to print rhombus pattern
void rhombusPattern()
{
    int rows;
    cout << "enter the no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= rows; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Function to print number pattern
void numberPattern()
{
    int rows;
    cout << "enter the no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}

// Function to print palindromic pattern
void palindromicPattern()
{
    int rows;
    cout << "enter the no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        for (int m = 2; m <= i; m++)
        {
            cout << m << " ";
        }
        cout << endl;
    }
}

// Function to print star pattern
void starPattern()
{
    int rows;
    cout << "enter the no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int m = rows; m >= 1; m--)
    {
        for (int n = 0; n < rows - m; n++)
        {
            cout << "  ";
        }
        for (int p = 2 * m - 1; p >= 1; p--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Function to print zig-zag pattern
void zigZagPattern()
{
    int columns;
    cout << "enter the no. of columns: ";
    cin >> columns;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if ((i + j) % 4 == 0)
            {
                cout << "*";
            }
            else if (i == 2 && j % 4 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Factorial function
int factorial(int num)
{
    int sum = 1;
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            sum = sum * i;
        }
        return sum;
    }
}

// Function to print Pascal's triangle
void pascalsTriangle()
{
    int i;
    cout << "Enter the number of rows: ";
    cin >> i;
    for (int m = 0; m < i; m++)
    {
        for (int j = 0; j <= m; j++)
        {
            int ans = factorial(m) / (factorial(j) * factorial(m - j));
            cout << ans << " ";
        }
        cout << endl;
    }
}

// Main function to choose pattern and call corresponding function
int main()
{
    int choice;
    cout << "Choose the pattern to print:" << endl;
    cout << "1. Rectangular Pattern" << endl;
    cout << "2. Hollow Rectangular Pattern" << endl;
    cout << "3. Inverted Half Pyramid" << endl;
    cout << "4. Half Pyramid after 180 degree rotation" << endl;
    cout << "5. Half Pyramid using numbers" << endl;
    cout << "6. Floyd's Triangle" << endl;
    cout << "7. Butterfly Pattern" << endl;
    cout << "8. Inverted Pattern" << endl;
    cout << "9. 0-1 Pattern" << endl;
    cout << "10. Rhombus Pattern" << endl;
    cout << "11. Number Pattern" << endl;
    cout << "12. Palindromic Pattern" << endl;
    cout << "13. Star Pattern" << endl;
    cout << "14. Zig-Zag Pattern" << endl;
    cout << "15. Pascal's Triangle" << endl;
    cout << "=>";
    cin >> choice;

    switch (choice)
    {
    case 1:
        rectangularPattern();
        break;
    case 2:
        hollowRectangularPattern();
        break;
    case 3:
        invertedHalfPyramid();
        break;
    case 4:
        halfPyramidRotation();
        break;
    case 5:
        halfPyramidNumbers();
        break;
    case 6:
        floydsTriangle();
        break;
    case 7:
        butterflyPattern();
        break;
    case 8:
        invertedPattern();
        break;
    case 9:
        zeroOnePattern();
        break;
    case 10:
        rhombusPattern();
        break;
    case 11:
        numberPattern();
        break;
    case 12:
        palindromicPattern();
        break;
    case 13:
        starPattern();
        break;
    case 14:
        zigZagPattern();
        break;
    case 15:
        pascalsTriangle();
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}
