/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:37:23 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/22 12:37:23 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static int	tam_str(unsigned char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			ii;
	unsigned char	*a;
	unsigned char	*b;
	size_t			maxsize;

	a = (unsigned char *) src;
	b = (unsigned char *) dst;
	ii = 0;
	i = 0;
	if (dstsize < tam_str(b))
		maxsize = dstsize + tam_str(a);
	else
		maxsize = tam_str(b) + tam_str(a);
	if (dstsize != 0)
		i = tam_str(b);
	if ((dstsize != 0) && (b != NULL))
	{
		while ((i < dstsize - 1) && (a[ii] != '\0'))
			b[i++] = a[ii++];
		b[i] = '\0';
	}
	return (maxsize);
}
