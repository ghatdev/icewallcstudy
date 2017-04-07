#include <stdio.h>

int fibonacci(int n)
{
	return (n == 0 || n == 1) ? n : fibonacci(n-1) + fibonacci(n-2);
}

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", fibonacci(i));
	}

	return 0;
}
