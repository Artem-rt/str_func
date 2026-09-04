//мегасырая недоделанная версия (не все фишки возвращаемого значения прописаны)

#include <stdio.h>
#include <string.h>
#include <assert.h>

int my_strcmp (const char *_Str1, const char *_Str2);

int my_strlen (const char* str);

int main ()
{
    char str1 [4] = "AB";
    char str2 [4] = "ABC";

    if (!my_strcmp(str1, str2))
        printf ("good\n");
    else
        printf ("bad\n");
    return 0;
}

int my_strcmp (const char *str1, const char *str2)
{
    if (my_strlen (str1) != my_strlen (str2))
    {
        return -1; //добавить сравнение и возвращать, какая строка какой по лексикографии впередиж
    }
    int i = 0;
    int cnt = 0;
    while (i < my_strlen (str1))
    {
        if (str1 [i] == str2 [i])
            cnt++;
        i++;
    }
    if (cnt == i)
        return 0;
    return -1;
}



int my_strlen (const char* str)
{
    assert (str);

    int cnt = 0;
    for (; str [cnt] != '\0'; ++cnt)
        ;
    return cnt;
}
