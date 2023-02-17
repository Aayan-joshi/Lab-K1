/* 5. WAP to display the following patters:
b.  54321 
    5432        
    543         
    54          
    5           */

    #include "stdio.h"

    int main(int argc, char const *argv[])
    {
        int n=54321;

        while(n!=0){
            printf("%d\n", n);
            n=n/10;
        }


        return 0;
    }
    