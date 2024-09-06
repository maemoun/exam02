#include <unistd.h>

void ft_replace(char *str, char c1, char c2)
{
    int i;
    i = 0;
    while(str[i])
    {
        if (str[i] == c1)
            write(1, &c2, 1);
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if(av[2][0] && av[3][0])
            ft_replace(av[1], av[2][0], av[3][0]);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}