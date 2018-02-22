#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a value:");

    scanf("%d %s", &i, str); //read inputs and store them into variables

    printf("\nYou entered: %d::::::%s\n", i, str);


    return 0;
}
