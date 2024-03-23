#include <stdio.h>

int main () {

    int num = 1;
    int sum = 0;

    while ( num <= 100 )
    {
        if ( num % 2 == 0 ) {

            sum += num;
            printf("%d \n", num);

        }
    
        num++;

    }


    return 0;
}