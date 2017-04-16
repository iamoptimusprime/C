#include <stdio.h>
#include <stdlib.h>

int main()
{
    (1 > 0)? printf("The result of your algorithm ---") : printf("");
    printf("\n");
    large();
    return 0;
}
void constraint()
{
    char movie [20];
    char *  pMovie = movie;
    printf("Try typing something of more than 20 characters: ");
    fgets(pMovie, 20, stdin);
    puts(pMovie);
}
void fn()
{
    int i, j, nt, k, sum;
    printf("Enter the number of terms: ");
    scanf("%d", &nt);
    int num[nt];
    printf("Enter the numbers one by one : ");
    for(i = 0; i < nt; i++)
    {
        scanf("%d", &num[i]);
    }
    for(j = 0; j < nt; j++)
    {
        for(k = 1; k <= nt && j != k; k++)
        {
            sum = num[j] + num[k];
            if (sum == 11)
            {
                printf(" %d, %d\t", num[j], num[k]);
            }
        }
    }
}
void large()
{
    int n, s1, s2, z;
    printf(" How many Integer numbers : ");
    scanf("%d", &n);
    z=n;
    if(n>0)
    {
        printf("\n Enter the First number : ");
        scanf("%d", &s1);
        n--;
        if(n>0)
        {
            for(; n>=1; n--)
            {
                printf("\n Enter the next number : ");
                scanf("%d", &s2);
                if(s1<s2)
                {
                    s1 = s2;
                }
            }
        }
    }
    printf("\n The Largest of %d numbers is %d", z, s1);
}
