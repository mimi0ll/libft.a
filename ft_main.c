#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int     main(void)
{
        char    *str;
        char    buffer[20];
        char    buffer2[20];

        printf("===== CHARACTER TESTS =====\n");
        printf("ft_isalpha('A') = %d | isalpha = %d\n",
                ft_isalpha('A'), isalpha('A'));
        printf("ft_isdigit('5') = %d | isdigit = %d\n",
                ft_isdigit('5'), isdigit('5'));
        printf("ft_isalnum('5') = %d | isalnum = %d\n",
                ft_isalnum('5'), isalnum('5'));
        printf("ft_isascii(127) = %d | isascii = %d\n",
                ft_isascii(127), isascii(127));
        printf("ft_isprint('A') = %d | isprint = %d\n",
                ft_isprint('A'), isprint('A'));

        printf("\n===== TOUPPER / TOLOWER =====\n");
        printf("ft_toupper('a') = %d | toupper = %d\n",
                ft_toupper('a'), toupper('a'));
        printf("ft_tolower('A') = %d | tolower = %d\n",
                ft_tolower('A'), tolower('A'));


 printf("\n===== STRING TESTS =====\n");
        str = "Hello 42!";
        printf("ft_strlen(\"%s\") = %zu | strlen = %zu\n",
                str, ft_strlen(str), strlen(str));

        printf("\n===== MEMSET =====\n");
        memset(buffer, 'A', 10);
        ft_memset(buffer2, 'A', 10);
        buffer[10] = '\0';
        buffer2[10] = '\0';
        printf("ft_memset: %s\n", buffer2);
        printf("memset:     %s\n", buffer);

        printf("\n===== BZERO =====\n");
        memset(buffer, 'A', 10);
        ft_bzero(buffer, 10);
        printf("ft_bzero first byte = %d\n", buffer[0]);

        printf("\n===== MEMCPY =====\n");
        ft_memcpy(buffer, "Hello", 6);
        printf("ft_memcpy: %s\n", buffer);

        printf("\n===== MEMMOVE =====\n");
        strcpy(buffer, "123456789");
        ft_memmove(buffer + 2, buffer, 5);
        printf("ft_memmove: %s\n", buffer);

        printf("\n===== STRLCPY =====\n");
        ft_strlcpy(buffer, "Hello", sizeof(buffer));
        printf("ft_strlcpy: %s\n", buffer);

        printf("\n===== STRLCAT =====\n");
        strcpy(buffer, "Hello");
        ft_strlcat(buffer, " 42", sizeof(buffer));
        printf("ft_strlcat: %s\n", buffer);

printf("\n===== STRCHR =====\n");
        printf("ft_strchr: %s\n", ft_strchr("Hello", 'l'));

        printf("\n===== STRRCHR =====\n");
        printf("ft_strrchr: %s\n", ft_strrchr("Hello", 'l'));

        printf("\n===== STRNCMP =====\n");
        printf("ft_strncmp: %d\n", ft_strncmp("Hello", "Hello", 5));

        printf("\n===== MEMCHR =====\n");
        printf("ft_memchr: %s\n",
                (char *)ft_memchr("Hello", 'l', 5));

        printf("\n===== MEMCMP =====\n");
        printf("ft_memcmp: %d\n", ft_memcmp("abc", "abd", 3));

        printf("\n===== STRNSTR =====\n");
        printf("ft_strnstr: %s\n",
                ft_strnstr("Hello 42 School", "42", 15));

        printf("\n===== ATOI =====\n");
        printf("ft_atoi(\"   -42\") = %d | atoi = %d\n",
                ft_atoi("   -42"), atoi("    -42"));


 printf("\n===== CALLOC =====\n");
        {
                int     *arr;
                int     i;

                arr = ft_calloc(5, sizeof(int));
                if (arr)
                {
                        i = 0;
                        while (i < 5)
                        {
                                printf("%d ", arr[i]);
                                i++;
                        }
                        printf("\n");
                        free(arr);
                }
                else
                        printf("calloc failed\n");
        }

        printf("\n===== STRDUP =====\n");
        str = ft_strdup("Hello 42!");
        printf("ft_strdup: %s\n", str);
        free(str);

        printf("\n===== END =====\n");
        return (0);






#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *str;
    char    **result;
    int     i;

    /* TEST ITOA */
    str = ft_itoa(-12345);
    printf("itoa: %s\n", str);
    free(str);

    /* TEST SPLIT */
    result = ft_split("hello world 42", ' ');
    i = 0;
    while (result[i])
    {
        printf("split[%d] = %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return (0);
}

