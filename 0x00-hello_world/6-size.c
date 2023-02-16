#include<stdio.h>
/**
 *main - Program that prints the sizeof various data
 * Return: 0 (Success)
 */
int main(void)
{
	char Chr;
	int Intg;
	long int L_Int:
	long long int LLI;
	float Fl;

printf("Size of a char: = %lu byte(s)\n", (unsigned long)sizeof(Chr));
printf("Size of an int: = %lu byte(s)\n", (unsigned long)sizeof(Intg));
printf("Size of a long int: = %lu byte(s)\n", (unsigned long)sizeof(L_Int));
printf("Size of a long long int: = %lu byte(s)\n", (unsigned long)sizeof(LLI));
printf("Size of a float: = %lu byte(s)\n", (unsigned long)sizeof(Fl));
return (0);
}
