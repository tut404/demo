#include <stdio.h>
#define NUMBER 3

int main()
{
    int a = 10;
#ifdef DEBUG
    printf("ikun6665\n");
#endif
    for (int i = 0; i < NUMBER; ++i)
    {
        printf("hello ikun !!!\n");
    }
    return 0;
}