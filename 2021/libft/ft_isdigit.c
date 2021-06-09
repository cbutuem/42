/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:51:14 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/02 17:51:14 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

Int ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}
