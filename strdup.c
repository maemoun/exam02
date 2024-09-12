#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    int i = 0;
    int size = ft_strlen(src);
    char *dest = malloc(size + 1);
    if (dest == NULL)
        return (NULL);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

#include <stdio.h>

int main()
{
    char s[] = "abcd";
    printf("%s\n", ft_strdup(s));
}