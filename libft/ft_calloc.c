/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:16:10 by cmendes-          #+#    #+#             */
/*   Updated: 2021/07/15 17:16:10 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	while (count >= i)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
