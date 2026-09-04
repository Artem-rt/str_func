// #include "TXLib.h"

#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strlen (const char* str);

int main ()
{
    char probn [100] = " ";
    // scanf ("%s", probn);
    printf ("%d", my_strlen (probn));
}

int my_strlen (const char* str)
{
    assert (str);
    // int cnt = 0;
    // while (str [cnt] != '\0')
    // {
    //     cnt++;
    // }
    int cnt = 0;
    for (; str [cnt] != '\0'; ++cnt)
        ;
    return cnt;
}
