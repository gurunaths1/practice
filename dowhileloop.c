#include <stdio.h>

int main()
{
    int num;

    do
    {
        scanf("%d", &num);

        printf("Your number is : %d \n", num);

    } while(num < 10);

    return 0;

}