#include <stdio.h>
/**
 * main -print the string in the put function
 *
 * Description: using the main function
 * this program prints "Programming is like buildig a multilingual puzzle"
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;
	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of long: %ld byte(s)\n", sizeof(li));
	printf("Size of long long: %ld byte(s)\n", sizeof(lli));
	printd("Size of float: %ld byte(s)\n", sizeof(f));
	return (0);
}
