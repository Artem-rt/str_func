#include "TXLib.h"
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <assert.h>

char * my_strcpy (char * __restrict__ _Dest, const char * __restrict__ _Source);
int my_strlen (const char* str);

int main ()
{
    char probn [10] = "987654321";
    my_strcpy (probn, "123456789");
    printf ("<%s>", probn);
}

char * my_strcpy (char * restrict_Dest, const char * restrict_Source)
{
        assert (restrict_Dest);
        assert (restrict_Source);

        int i = 0;

        printf("rDsl %d,   rSsl %d", my_strlen (restrict_Dest), my_strlen (restrict_Source));

        //в оригинале нет этой проверки-----------------------
        if (my_strlen (restrict_Dest) < my_strlen (restrict_Source))
            abort ();
        //----------------------------------------------------

        while (restrict_Source [i] != '\0')
        {
            restrict_Dest[i] = restrict_Source [i];
            printf ("rD%c,   rS%c\n", restrict_Dest[i], restrict_Source [i]);
            i++;
        }
        restrict_Dest[i] = '\0';
        return restrict_Dest;
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
