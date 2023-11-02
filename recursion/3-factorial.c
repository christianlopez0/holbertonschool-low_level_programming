#include <main.h>

int factorial ( int n)
{
	if (n<= 1)
		return 1;
	return n * factorial(n - 1);
}

	int main ()
{
	printf("%i\n" , factorial(10));
	return 0;
}`
