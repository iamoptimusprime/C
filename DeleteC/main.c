#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &j);
    printf("\n The fibonacci sequence is as follows: \n");
    for (i = 0; i < j; i++)
    {
        if (k == 5)
        {
            printf("\n");
            k = 0;
        }
        printf("%d\t", fiboRecursion(i));
        k++;
    }
    return 0;
}
void delay()
{
    long i, j;
    for (i = 0; i <= 99000; i++)
    {
        for(j = 0; j <= 99000; j++)
        {
            //this will cause delay.
        }
    }
}
void russia()
{
    int a, i, t;
    srand(time(NULL));
    a = (rand()%6)+1;
    printf("%d", a);
}
int rev()
{
    long original;
    printf("\nEnter an integer: ");
    scanf("%d", &original);
    long reverse = 0;
    long remainder;
    while (original != 0)
    {
        remainder = original % 10;
        reverse = reverse * 10 + remainder;
        original = original / 10;
    }
    printf("\nThe number in reverse manner: %d\n", reverse);
    return reverse;
}
void fibo()
{
    long a, i, x = 0, b = 1, c = 1, num;
    printf("\nEnter the number of terms: ");
    scanf("%d", &num);
    printf("The fibonacci sequence is: \n\n0 1 1 ");
    for (i = 0; i < num; i++)
    {
        a = b + c;
        b = a;
        c = a - c;
        printf("%d ", a);
        x++;
        if (x == 10)
        {
            printf("\n");
            x = 0;
        }
    }
}
void pi()
{
    int i;
    float term, a = 0, b = 3, c;
    printf("\n Enter the number of terms: ");
    scanf("%f", &term);
    for (i = 1; i <= term; i++)
    {
        if (i % 2 != 0)
        {
            a += (-1)/ b;
            b += 2;
        }
        else
        {
            a += 1/b;
            b += 2;
        }
    }
    c = 4 * (1 + a);
    printf(" The value of pi is %f\n", c);
}
void fact()
{
    long i, j, k = 1;
    printf("Enter an integer: ");
    scanf("%d", &j);
    for (i = 1; i <= j; i++)
    {
        k *= i;
    }
    printf("\n%d! = %d", j, k);
}
//Fibonacci sequence using recursion
int fiboRecursion(int i)
{
    if(i == 0)
    {
        return 0;
    }
    if(i == 1)
    {
        return 1;
    }
    return fiboRecursion(i - 1) + fiboRecursion(i - 2);
}
