#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    //  method 1 using the condtion statement
    if (a > 0)
    {
        printf("It is the positive number");
    }
    else if (a == 0)
    {
        printf("It is the neutral number");
    }
    else
    {
        printf("It is the negative number");
    }

    // method 2 
    return 0;
}