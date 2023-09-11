#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s;

    s = malloc(12);
    strcpy(s, "Best School");
    printf("%s\n", s);
    return (0);
}
