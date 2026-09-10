#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
        size_t  i;
        size_t  j;
        char    *join;

        i = 0;
        j = 0;
        if (!s1 || !s2)
                return (NULL);
        join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
        if (!join)
                return (NULL);
        while (s1[j])
                join[i++] = s1[j++];
        j = 0;
        while (s2[j])
                join[i++] = s2[j++];
        join [i] = '\0';
        return (join);
}
#include <stdio.h>
int     main()
{
        printf("%s",ft_strjoin( "hello", "mimi"));
        return(0);
}
