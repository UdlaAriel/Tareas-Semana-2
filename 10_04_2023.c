#include <stdio.h>
#include <math.h>

int main ()
{
    int i, j, num;
    int answer[100];
    int result;

    printf("Ingrese un número >>> ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (i%2 != 0)
        {
            answer[i] = 1/i;
        }
    }

    for (j = 1; j < num; j++)
    {
        if (j%2 != 0)
        {
            answer[j] = 1/j;
        }
        else 
        {
            answer[j] = -1/j;
        }
        
        result += answer[j];
    }

    printf("\nResultado: %d", result);

    return 0;
}