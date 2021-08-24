/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:20:43 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/16 19:20:43 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*a;

	a = (char *) s;
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == c)
			return (&a[i]);
		i++;
	}
	if (c == '\0')
		return (&a[i]);
	return (0);
}
