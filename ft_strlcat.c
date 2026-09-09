size_t ft_strlcat(char *dst, const char *src, size_t datasize)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t i;

    i = 0;
    if (datasize <= dst_len)
        return(datasize + src_len);

    while (src[i] && (dst_len + 1) < (datasize - 1))

    {
        dst[dst_len + 1] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}