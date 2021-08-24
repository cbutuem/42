/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:42:17 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/14 19:42:17 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	const unsigned char		*a;
	unsigned char			*b;

	a = src;
	b = dst;
	i = 0;
	while (i < n && a[i] != c)
	{
		b[i] = a[i];
		i++;
	}
	if (a[i] == c)
		i++;
	return (0);
}
