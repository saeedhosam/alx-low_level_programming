#include <stdio.h>

typedef struct node *nodePtr;

struct node
{
    int value;
    nodePtr next;
}

typedef struct node node;

int main(void)
{
    printf("Hello, World!");
    return (0);
}
