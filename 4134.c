#include <stdio.h>

int main()
{
    int *a, p;
    int value = 10;
    a = &value;
    p = *a;

    printf("%d %d", *a, p);

    return 0;
}
