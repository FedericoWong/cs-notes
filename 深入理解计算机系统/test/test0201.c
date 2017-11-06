#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float sum_elements(float a[], unsigned length)
{
    int i;
    float result = 0;

    for (i = 0; i <= length - 1; i++)
    {
        result += a[i];
    }
    return result;
}

int strlonger(char *s, char *t)
{
    return strlen(s) - strlen(t) > 0;
}

int main(void) 
{
    //int a[] = {1, 2, 3};
    //float sum = sum_elements(a, 0);
    char *s = "yinjun";
    char *t = "xian";
    int ret = strlonger(s, t);
    printf("yin\n");
    printf("%d\n", ret);

    return 0;
}