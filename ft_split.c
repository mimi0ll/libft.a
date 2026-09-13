#include "libft.h"

static int count_words(char const *s, char c)
{
    int count;

    count = 0;

    while( *s)
    {
        if(*s != c)
        {
            count++;
            while (*s != c && *s != '\0')
                s++;
        }
        if(*s == c)
            s++;
    }
    return (count);
}

static size_t word_len(char const *s, char c)
{
    size_t len;

    len = 0;
    while (*s != c && *s != '\0')
    {
        len++;
        s++;
    }
    return (len);
}

static void copy_word(char *dest, char const *src, size_t len)
{
    size_t i;
  
    i = 0;
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

static void free_result(char **result, size_t i)
{
    size_t j;

    j = 0;
    while (j < i)
    {
        free(result[j]);
        j++;
    }
    free(result);
}

static int check(char **result, size_t i)
{
    if(!result[i])
    {
        free_result(result, i);
        return (0);
    }
    return(1);
}

static int fill_word(char **result, char const **s, size_t i, char c)
{
    size_t len;

    while(**s == c)
        (*s)++;
    len = word_len(*s, c);
    result[i] = malloc(sizeof(char) * (len + 1));
    if (!check(result, i))
        return (0);
    copy_word(result[i], *s, len);
    (*s) += len;
    return (1);
}

char    **ft_split(char const *s, char c)
{
    int count;
    char **result;
    size_t i;

    i = 0;
    if (!s)
        return(NULL);
     count = count_words(s, c);
    result = malloc(sizeof(char *) * (count + 1));
    if (!result)
        return (NULL);
    while (i < count)
    {
       if(!fill_word(result, &s, i, c))
            return(NULL);
        i++;
    }
    result[i] = NULL;
    return (result);
}














```c
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	copy_word(char *dest, char const *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static void	free_result(char **result, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(result[j]);
		j++;
	}
	free(result);
}

static int	fill_word(char **result, char const **s, size_t i, char c)
{
	size_t	len;

	while (**s == c)
		(*s)++;
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	result[i] = malloc(sizeof(char) * (len + 1));
	if (!result[i])
	{
		free_result(result, i);
		return (0);
	}
	copy_word(result[i], *s, len);
	*s += len;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	int		count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < (size_t)count)
	{
		if (!fill_word(result, &s, i, c))
			return (NULL);
		i++;
	}
	result[i] = NULL;
	return (result);
}
```








