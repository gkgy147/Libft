/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:14:39 by grobert           #+#    #+#             */
/*   Updated: 2022/11/02 20:46:43 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*((unsigned char *)(s + n)) = 0;
}*/

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*snew;

	i = 0;
	snew = (unsigned char *)s;
	while (i < n)
	{
		snew[i] = 0;
		i++;
	}
	s = snew;
}
