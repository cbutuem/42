/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:20:22 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/08 19:20:22 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen (const char *s)
{
	size_t i;
//	const char *a = s;

	i = 0;
	while ( s[i] != '\0') 
		i++;
	return (i);
}
int main ()
{
	size_t i;
	i = ft_strlen ("turubom amados?");
	printf("Quem nasceu em 2016 tem %zu anos \n", i);
	return (0);
}
