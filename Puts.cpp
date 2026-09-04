#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_puts (const char *str);

int main ()
{
    my_puts ("123");
}

int my_puts (const char *str)
{
    assert (str);

    int cnt = 0;
    while (str[cnt] != '\0')
    {
        putchar (str[cnt]);
        cnt ++;
    }
    if (cnt != 0)
    {
        putchar ('\n');
        return cnt;
    }
    return EOF;
}
