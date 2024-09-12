#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int size;
    if (start < end)
    {
        size = end - start;
    }
    else if (start > end)
    {
        size = start - end;
    }
    else
        size = 1;
    int *tab = malloc(size * 4);
    if (tab == 0)
        return (0);
    while (start <= end)
    {
        tab[i] = start;
        start++;
        i++;
    }
    while (start >= end)
    {
        tab[i] = start;
        start--;
        i++;
    }
    return(tab);
}

#include <stdio.h>

int main()
{
    int *tt = ft_range(0, -1);
    printf("%d%d\n", tt[0], tt[1]);
}