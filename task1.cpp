#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x = 14;
    double f;
    f = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9));
    cout << "const = " << x << ", function = " << f << endl;
    cin >> x;
    if (x <= 0)
    {
        cout << "Error x<=0 ";
    }
    else
    {
        f = (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9));
        cout << "x = " << x << ", function = " << f;
    }
}
