#include <unistd.h>

int    ft_double(char *str, char c, int n)
{
    if (n == 0)
        return (1);
    while(n >= 0)
    {
        if (str[n - 1] == c)
            return (0);
        n--;
    }
    return(1);
}

int ft_check(char *str, char c)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return(0);
        i++;
    }
    return(1);
}

void    ft_inter(char *s1, char *s2)
{
    int i;
    i = 0;
    while(s1[i])
    {
        if (ft_check(s1[i], s2) == 0)
        {
            if (ft_double(s1[i], s1, i) == 0)
                write(1, &s1[i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_inter(av[1], av[2]);
    }
    else
        write(1, "\n", 1);
}