#include "bubble_sort_Algorithm.h"

int *bubble_sort(int *a, int size)
{
    int i, j, tem, flag;
    
    j = 0;
    while (j < (size - 1))
    {
        i = 0;
        flag  = 0;
        while (i < (size -1))
        {
            if (a[i] > a[i + 1])
            {
                tem = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tem;
                flag = 1;
            }
            i++;
        }
        if (flag == 0)
        break;
    j++;
    }
    return (a);
}

int main(int ac, char *av[])
{
    int i = 0;
    int size = ac - 1;
    int *arr = malloc(sizeof(int) * size);
    char buf[size];

    if (ac > 1)
    {
        while (i < ac)
        {
            arr[i - 1] = ft_atoi(av[i]);
            i++;
        }
        arr = bubble_sort(arr, size);
        i = 0;
        while (i < size)
        {
            ft_itoa(arr[i], buf);
            write(1, buf, ft_strlen(buf));
            write(1, "\n", 1);
            i++;
        }
        write(1, "\n", 1);
        free(arr);    
    }
    else
        write(1, "\n", 1);
    return 0;
}