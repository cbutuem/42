/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:35:23 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/02 17:35:23 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x >= '0' && x <= '9') || (x >= 'A' && x <= 'Z')
		|| (x >= 'a' && x <= 'z'))
		return (1);
	return (0);
}
