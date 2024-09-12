#include <stdlib.h>

int strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

char *strjoin(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int size = strlen(s1) + strlen(s2);
    char *dest = malloc(size + 1);
    if (dest == NULL)
        return (NULL);
    while (s1[i])
    {
        dest[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while(s2[i])
    {
        dest[j] = s2[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}