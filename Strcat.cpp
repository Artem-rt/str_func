#include <stdio.h>
#include <string.h>
#include <assert.h>

char *my_strcat(char * restrict_Dest, const char * _restrict_Source);
int my_strlen (const char* str);

int main ()
{
    char probn [3] = "AB";
    my_strcat (probn, "CD");
    printf ("<%s> , %d", probn,  my_strlen (probn));
}


char *my_strcat(char * restrict_Dest, const char * restrict_Source)
{
    assert (restrict_Dest);
    assert (restrict_Source);

    char* new_str = restrict_Dest + my_strlen (restrict_Source); //почему оно работает??
    while (*restrict_Source != '\0')
    {
        *new_str = *restrict_Source;
        new_str++;
        restrict_Source++;
    }
    *new_str = '\0';
    return restrict_Dest;
}

int my_strlen (const char* str)
{
    assert (str);

    int cnt = 0;
    for (; str [cnt] != '\0'; ++cnt)
        ;
    return cnt;
}

