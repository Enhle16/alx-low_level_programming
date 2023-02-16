#include<stdio.h>

/**
 *main - Program that prints the size
 *of various types on the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */
int main(void)
{
char Character;
int Interger;
long int Long_interger:
long long int Long_Long_interger;
float Float;
printf("Size of a char: = %d byte(s)\n", sizeof(Character));
printf("Size of an int: = %d byte(s)\n", sizeof(Interger));
printf("Size of a long int: = %d byte(s)\n", sizeof(Long_interger));
printf("Size of a long long int: = %d byte(s)\n", sizeof(Long_Long_interger));
printf("Size of a float: = %d byte(s)\n", sizeof(Float));
return (0);
}
