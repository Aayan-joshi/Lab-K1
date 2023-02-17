/* 5. WAP to display the following patters:
c.  1
    12
    123
    1234
    12345 */

#include "stdio.h"

int main(int argc, char const *argv[])
{
    int i, j, n=0;

    for (i = 0; i <= 5; i++)
    {
        for(j=1;j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

        return 0;
}
