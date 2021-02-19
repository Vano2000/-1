#include <iostream>
#include <math.h>
using namespace std;
int x = 14;
double f;
void Function()
{
    f = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9));
}

void main()
{
    Function();
    cout << "x = " << x << ", function = " << f << endl;
    cin >> x;
    if (x <= 0)
    {
        cout << "x = " << x << ", Error x<0\n";
    }
    else
    {
        Function();
        cout << "x = " << x << ", function = " << f << "\n";
    }
}
