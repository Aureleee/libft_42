#include "libft.h"

size_t ft_strlcat(char *dst,const char *src, size_t size)
{
	/*size represents the memory allocated of dst*/ 
	size_t len_dst;
	size_t len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst + len_src >= size)
		len_src = size - len_dst -1;
	dst[len_dst + len_src + 1] = 0;
	while (len_src > 0)
	{
		dst[len_dst + len_src] = src[len_src];
		len_src--;
	}
	len_src = ft_strlen(src);
	return (len_src + len_dst);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t len_dst = 0;
    size_t len_src = 0;
    size_t i;

    while (len_dst < size && dst[len_dst])
    /* BECAUSE dst nocessalrely teminated*/
        len_dst++;
    while (src[len_src])
        len_src++;
    if (len_dst == size)
        return (size + len_src);
    i = 0;
    while (src[i] && (len_dst + i + 1) < size)
    {
        dst[len_dst + i] = src[i];
        i++;
    }
    if (len_dst + i < size)
        dst[len_dst + i] = '\0';
    return (len_dst + len_src);
}
