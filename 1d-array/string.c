#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    printf("Enter any sentence: ");
    gets(str);
    printf("\nYou have entered:\n");
    puts(str);
    getch();
    return 0;
}
