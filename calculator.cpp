#include <iostream>
#include <cmath>
using namespace std;
class calculator
{
public:
    double x, y;
    calculator(double a, double b)
    {
        x = a;
        y = b;
    }
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
        double q1 = 0, q2 = 0;
        q1 = sqrt(x);
        q2 = sqrt(y);
        cout << "The square root of the first number is: " << q1 << endl;
        cout << "The square root of the second number is: " << q2 << endl;
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
        cout << "Welcome to my Portable Calculator! You can opt for the following operations here: " << endl;
        cout << "1. ADD" << endl
             << "2. Subtract" << endl
             << "3. Multiply" << endl
             << "4.Divide" << endl
             << "5. Exponent" << endl
             << "6. Roots" << endl
             << "7. Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            l.add();
            break;
        case 2:
            l.subtract();
            break;
        case 3:
            l.mul();
            break;
        case 4:
            l.divide();
            break;
        case 5:
            l.exponent();
            break;
        case 6:
            l.roots();
            break;
        case 7: cout<<"Thank you for giving my Calculator a chance. Come again soon!"<<endl;
            exit(0);
        default:
            exit(0);
        }
    }
}
