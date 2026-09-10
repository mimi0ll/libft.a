#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
        size_t  i;
        size_t  j;
        size_t  end;
        char    *newstr;

        i = 0;
        if (!s1 || !set)
                return (NULL);
        while (s1[i] && ft_strchr(set, s1[i]))
                i++;
        end = ft_strlen(s1);
        while (end > i && ft_strchr(set, s1[end - 1]))
                end--;
        newstr = malloc(sizeof(char) * (end - i - 1));
        if (!newstr)
                return (NULL);
        j = 0;
        while (i < end)
                newstr[j++] = s1[i++];
        newstr[j] = '\0';
        return (newstr);
}
