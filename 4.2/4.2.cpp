#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;


double ctg(double x)
{
	return 1 / tan(x);
}

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = pow(x, 2) / (2.1 + sin(fabs(x)));
        if (x <= -5)
            B = ctg(exp(x));
        else
            if (x >= 0)
                B = log(sqrt(fabs(x) - (pow(x, 2) / 2)));
            else
                B = 2 - ((pow(x, 3)) / (fabs(x) + 1));
        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}