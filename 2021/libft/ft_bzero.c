/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:40:55 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/07 16:40:55 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_bzero(void *str, size_t len)
{
	size_t i;
	unsigned char *a;

	a = str;

	i = 0; 	
	while (i < len)
	{
		a[i] = '0';
		i++;
	}
	return (str);
}
int main ()
{
	char str[21] = "Alo Galera de Cowboy";
	ft_bzero(str + 10, 3); 
	printf ("%s\n", str);
	return (0);
}
