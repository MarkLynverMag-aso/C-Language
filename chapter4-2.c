/* Absolute Beginner's Guide to C, 3rd Edition
Chapter 4 example 2--chapter4-2.c */

#include <stdio.h>

int main()
{
    /* Here is some more code to help you with printf(), Escape
    Sequences, and Conversion Characters */

    printf("Quantity\tCost\tTotal\n");
    printf("%\t\t$%.2f\n", 3, 9.99, 29.97);
    printf("Too many spaces     \b\b\b\b can be fixed with the ");
    printf("//%c Escape Character\n", 'b');
    printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep");
    printf("a few beeps.\n\n\n");
    printf("%s %c.", "you are kicking butt learning", 'C');
    printf("You just finished chapter %d.\nYou have finished ", 4);
    printf("%.1f%c of the book.\n", 12.500, '%');
    printf("\n\nOne third equals %.2f or ", 0.33333);
    printf("%.3f or %.4f or ", 0.333333, 0.333333);
    printf("%.5f or %.6f\n\n\n\n", 0.333333333, 0.33333333);

    return 0;
}