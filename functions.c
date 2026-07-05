#include "functions.h"

int factorial(int n)
{
    if (n < 0)
        return -1;

        int result = 1;
        for (int i = 1; i <= n; i++)
        {
            result *= i;
        }
        
        return result;

}
int lcm(int a, int b) 
{
    if (a == 0 || b == 0)
        return 0;
    return abs(a / gcd(a, b)) * abs(b);
}
