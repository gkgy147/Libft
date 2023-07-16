/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:57:09 by grobert           #+#    #+#             */
/*   Updated: 2022/11/04 20:21:43 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*static size_t	ft_min(size_t x, size_t y)
{
	if (x < y)
		return (x);
	return (y);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	result;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	result = src_len + ft_min(dst_len, dstsize);
	if (dstsize == 0)
		return (result);
	while (src[i] && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (result);
}*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!size)
		return (ft_strlen(src));
	j = 0;
	while (dest[j] && j < size)
		j++;
	i = j;
	while (src[j - i] && j + 1 < size)
	{
		dest[j] = src[j - i];
		j++;
	}
	if (i < size)
		dest[j] = '\0';
	return (i + ft_strlen(src));
}
