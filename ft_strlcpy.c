size_t ft_strlcpy(char *dst, const char *src, size_t datasize)
{
    size_t src_len = ft_strlen(src);
    size_t i;

    if (datasize == 0)
        return (src_len);
    while(src[i] && i < (datasize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}