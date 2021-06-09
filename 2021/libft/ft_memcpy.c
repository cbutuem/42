/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 23:33:36 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/07 23:33:36 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	const unsigned char *a = src;
	unsigned char *b = dst;

	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);

}
int main ()
{
	char dst[] = "Olaa, tudo bem?";
	char src[] = "hello tudo bom?";
	ft_memcpy (dst, src, 5);
	printf ("%s\n", dst);
	return(0);
}
