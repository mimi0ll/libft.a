#include "libft.h"

static  void    print_number(int n, int fd)
{       
        char    digit;
        if( n == -2147483648)
        {
                write(fd, "-2147483648", 11);
                return;
        }
        if (n < 0) 
        {
                n = -n; 
                write (fd, "-", 1);
        }
        if (n >= 10)
        {                       
                print_number(n / 10, fd);
        }
        digit = n % 10 + '0';
        write (fd, &digit, 1);
}       

void    ft_putnbr_fd(int n, int fd)
{       
        print_number(n, fd);
}       
~       
