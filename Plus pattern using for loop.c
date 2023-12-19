#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j;

    for(i=1; i<=5; i++)/*prints coulmbs*/
    {
        for(j=1; j<=i; j++)/*prints rows*/
        {
            printf("+ ");
        }
        printf("\n");
    }

        return 0;
}
