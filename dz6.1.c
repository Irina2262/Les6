#include <stdio.h>

void printOdds(void);

int main()
{
    printOdds();
    return 0;
}
void printOdds(void)
{
int a;
    scanf("%d", &a);
    if (a == 0)
    return;
    if (a % 2 != 0)
        printf("%d ", a);
    printOdds();
}

