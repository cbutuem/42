/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:17:38 by cmendes-          #+#    #+#             */
/*   Updated: 2021/06/01 19:17:38 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     teste1(int x)
{
	if (x >= 'A' && x <= 'Z')
		x = x + 32;
    return (x);
}
int main()
{
	printf ("%c\n", teste1('G'));
	return (0);

}
