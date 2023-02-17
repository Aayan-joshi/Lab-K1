#include "stdio.h"

int main()
{
    int n=12345;

    while(n!=0)
    {
        printf("%d\n", n);
        n=n/10;
    }


    return 0;
}
