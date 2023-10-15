#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class calculator
{
private:
    double x, y;

public:
    calculator(double a, double b) : x(a), y(b) {}
    void add()
    {
        double sum = x + y;
        cout << "The sum is: " << sum << endl;
    }
    void subtract()
    {
        double diff = 0;
        if (x > y)
        {
            diff = x - y;
        }
        else
        {
            diff = x - y;
            diff *= -1;
        }
        cout << "The difference is: " << diff << endl;
    }

    void mul()
    {
        double prd;
        prd = x * y;
        cout << "Their product is: " << prd << endl;
    }

    void divide()
    {
        double div;
        int ch;
        cout << "Enter 1 to divide the 1st number by the 2nd" << endl
             << "Enter 2 to divide the 2nd number by the first" << endl;
        cin >> ch;
        if (ch == 1)
        {
            div = x / y;
        }
        else
        {
            div = y / x;
        }
        cout << "THe result is: " << div << endl;
    }

    void exponent()
    {
        double res1 = 0, res2 = 0;
        int p, q;
        cout << "Enter the power to which you want to raise the first number: " << endl;
        cin >> p;
        cout << "Enter the power to which you want to raise the second number: " << endl;
        cin >> q;
        res1 = pow(x, p);
        res2 = pow(y, q);
        cout << "After performing the operations, we get: " << endl;
        cout << "First result: " << res1 << endl;
        cout << "Second ResultL " << res2 << endl;
    }

    void roots()
    {
        double q1 = 0, q2 = 0, c1 = 0, c2 = 0;
        int ch;
        cout << "Enter:" << endl
             << "1 to find the square roots of the numbers" << endl
             << "2 to find the cube roots of the numbers" << endl;
        cin >> ch;
        if (ch == 1)
        {
            q1 = sqrt(x);
            q2 = sqrt(y);
            cout << "The square root of the first number is: " << q1 << endl;
            cout << "The square root of the second number is: " << q2 << endl;
        }
        else
        {
            c1 = cbrt(x);
            c2 = cbrt(y);
            cout << "The cube root of the first number is: " << c1 << endl;
            cout << "The cube root of the second number is: " << c2 << endl;
        }
    }

    void trigo()
    {
        int ch3, ch1, ch2;
        double si = 0, co = 0, t = 0;
        cout << "For which number do you want to perform the trigonometric functions: " << endl
             << "Enter" << endl
             << "1 for the  first number" << endl
             << "2 for the second number" << endl;
        cin >> ch3;
        if (ch3 == 1)
        {
            cout << "For the first number ie " << x << endl
                 << "What do you want to find?" << endl
                 << "1) Sine" << endl
                 << "2)Cosine" << endl
                 << "3)Tan" << endl;
            cin >> ch1;
            switch (ch1)
            {
            case 1:
                si = sin(x);
                cout << "The sine of the " << x << " is " << si << endl;
                break;
            case 2:
                co = cos(x);
                cout << "The cosine of the " << x << " is " << co << endl;
                break;
            case 3:
                t = tan(x);
                cout << "The tan of the " << x << " is " << t << endl;
                break;
            default:
                cout << "Wrong Choice" << endl;
                break;
            }
        }
        else
        {
            cout << "For the second number ie " << y << endl
                 << "What do you want to find?" << endl
                 << "1) Sine" << endl
                 << "2)Cosine" << endl
                 << "3)Tan" << endl;
            cin >> ch2;
            switch (ch2)
            {
            case 1:
                si = sin(y);
                cout << "The sine of the " << y << " is " << si << endl;
                break;
            case 2:
                co = cos(y);
                cout << "The cosine of the " << y << " is " << co << endl;
                break;
            case 3:
                t = tan(y);
                cout << "The tan of the " << y << " is " << t << endl;
                break;
            default:
                cout << "Wrong Choice" << endl;
                break;
            }
        }
    }

    void matrixadd()
    {
        int a[10][10], b[10][10], c[10][10], m, n, i, j;
        cout << "Enter the number of rows" << endl;
        cin >> m;
        cout << "Enter the number of columns" << endl;
        cin >> n;
        cout << "Enter matrix A" << endl;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter matrix B" << endl;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> b[i][j];
            }
        }

        // Addition
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        cout << "The final matrix is: " << endl;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << setw(4) << c[i][j];
            }
            cout << endl;
        }
    }

    void menu()
    {
        cout << "Welcome to my Portable Calculator! You can opt for the following operations here: " << endl;
        cout << "1. ADD" << endl
             << "2. Subtract" << endl
             << "3. Multiply" << endl
             << "4. Divide" << endl
             << "5. Exponent" << endl
             << "6. Roots" << endl
             << "7. Trigonometric Operations" << endl
             << "8. Matrix Addition" << endl
             << "9. Exit" << endl;
    }
};

int main()
{

    int ch = 0;
    double a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    calculator l(a, b);
    while (1)
    {
        l.menu();
        cin >> ch;
        switch (ch)
        {
        case 1:
            l.add();
            cout << endl;
            break;
        case 2:
            l.subtract();
            cout << endl;
            break;
        case 3:
            l.mul();
            cout << endl;
            break;
        case 4:
            l.divide();
            cout << endl;
            break;
        case 5:
            l.exponent();
            cout << endl;
            break;
        case 6:
            l.roots();
            cout << endl;
            break;
        case 7:
            l.trigo();
            cout << endl;
            break;
        case 8:
            l.matrixadd();
            cout << endl;
            break;
        case 9:
            cout << "Thank you for giving my Calculator a chance. Come again soon!" << endl;
            exit(0);
        default:
            cout << "OOPS!! Wrong choice." << endl;
            break;
        }
    }
}
