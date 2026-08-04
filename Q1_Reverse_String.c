#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], t;
    int i, len;
    gets(str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        t = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = t;
    }
    printf("%s", str);
    return 0;
}