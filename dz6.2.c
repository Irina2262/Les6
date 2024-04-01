#include <stdio.h>

void print_ab(int a, int b)
{
    if (a == b) {
    printf("%d", a);
    } else {
		(a < b) ? printf("%d", a++) : printf("%d", a--);
	print_ab(a, b);
    }
}
int main()
{
int a = 2, b = 7;
    scanf("%d%d", &a, &b);
    
    print_ab(a, b);
    
	return 0;
}

