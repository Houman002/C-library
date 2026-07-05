#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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


void reverseString(char *str) {
    if (str == NULL) return;

    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int lcm(int a , int b){
if (a==0 || b==0)
    return 0;
a = abs(a);
b = abs(b);
return (a/gcd(a,b))*b;
}
