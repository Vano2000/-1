﻿#include <iostream>
#include <math.h>
#include "func.h"
using namespace std;
void main()
{
    x = 14;
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
