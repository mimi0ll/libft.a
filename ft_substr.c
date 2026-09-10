#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        size_t  x;
        size_t  i;
        char    *newstr;

        x = 0;
        if (!s)
                return (NULL);
        i = ft_strlen(s);
        if (start >= i)
                return (ft_strdup(""));
        if (len > i - start)
                len = i - start;
        newstr = malloc ((len + 1) * sizeof(char));
        if (!newstr)
                return (NULL);
        while (start < i && x < len)
        {
                newstr[x] = s[start];
                start++;
                x++;
        }
        newstr[x] = '\0';
        return (newstr);
}
