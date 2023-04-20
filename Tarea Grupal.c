#include <stdio.h>
#include <math.h>

int main ()
{
    int i, num;
    float answer;
    float result;

    printf("Puts a number to calculate = 1 - 1/3 + 1/5 - 1/7 ...>>> ");
    scanf("%d", &num);
   
    for (i = 1; i <= num; i++)
    {
        
        answer =  1/(2*(float)i-1);

        if (i%2 == 0) 
        {
            result -= answer;
        }
        else 
        {
           result += answer;
        }
    }

    printf("\n Result: %.2f", result);
    return 0;
}