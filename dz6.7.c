#include <stdio.h>

int acounter()
{
	char input;
    scanf("%c", &input);
    if (input == '.')
    return 0;
    else if (input == 'a')
        return acounter () +1;
        else
        return acounter ();
} 

int main()
{
    printf("%d", acounter ());
    
    return 0;
}
