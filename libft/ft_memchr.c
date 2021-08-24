/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 21:39:26 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/15 21:39:26 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr (const void *s, int c, size_t n)
{
	size_t			i;
	char			*a;

	a = (char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == c)
			return (&a[i]);
		i++;
	}
	return (0);
}	
