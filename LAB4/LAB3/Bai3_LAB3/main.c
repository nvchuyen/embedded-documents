#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ten[32];
    printf("what is your name: ");
    scanf("%s", ten);
    printf("Hello %s. How are you?\n", ten);
    return 0;
}
