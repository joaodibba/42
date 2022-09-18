#include<stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int swap;
    
    i = 0;

    while(i < (size / 2))
    {
        swap = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = swap;
        i++;
    }
}
int main ()
{
    int size = 3;
    int tab[3] = {1,2,3};
    ft_rev_int_tab(tab, size);
    printf("%d, %d, %d", tab[0], tab[1], tab[2]);
    return 0;
    
}