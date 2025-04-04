#include "pushswap.h"
char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*s2;

	i = 0;
	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len + 1));
	if(!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    dest_len;
    size_t    total_len;
    size_t    i;

    dest_len = 0;
    i = 0;
    if (!dst && size == 0)
        return (0);
    while (dst[dest_len] && dest_len <= size)
    {
        dest_len++;
    }
    if (dest_len >= size)
        return (size + ft_strlen(src));
    total_len = dest_len + ft_strlen(src);
    while (src[i] && dest_len < size - 1)
        dst[dest_len++] = src[i++];
    dst[dest_len] = '\0';
    return (total_len);
}
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*result;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = malloc(sizeof(char) * total_len);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, ft_strlen(s1) + 1);
	ft_strlcat(result, s2, total_len);
	return (result);
}