#include <math.h>
double Function(double x)
{
    return (pow(x, 2) + 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) - 2 * x - 3 + (x + 1) * sqrt(pow(x, 2) - 9));;
}