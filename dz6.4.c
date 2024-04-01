#include <stdio.h>

int sumBinDigits(int n);

int main()
{
int n;
	scanf("%d", &n);
    printf("%d\n", sumBinDigits(n));
    return 0;
} 
    int sumBinDigits(int n) {
	if (n / 2 == 0)
        return n % 2;
    return n % 2 + sumBinDigits(n / 2);
    }

