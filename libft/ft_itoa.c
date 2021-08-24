/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:37:43 by cmendes-          #+#    #+#             */
/*   Updated: 2021/07/30 18:37:43 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ta_mal(int t)
{	
	int		i;

	i = 1;
	if (t < 0)
		t = t * -1;
	while (t / 10 != 0)
	{
		t = t / 10;
		i++;
	}
	return (i + 1);
}

static int	rec(int t)
{
	int		a;
	int		b;
	int		i;
	int		ii;

	i = 2;
	ii = 1;
	b = 0;
	while (i < ta_mal(t))
	{
		ii = ii * 10;
		i++;
	}
	if (t < 0)
		t = t * -1;
	while (t > 0)
	{
		a = t % 10;
		b = b + (a * ii);
		ii /= 10;
		t /= 10;
	}
	return (b);
}

static int	plus(int n)
{
}

char	*ft_itoa(int n)
{
	int		i;
	int		conv;
	int		back;
	char	*s;
	char	*a;

	//i = ta_mal + 1;
	i = 0;
	back = rec(n);
	s = (char *) malloc(ta_mal(n) * sizeof (char));
	if (s == NULL)
		return (NULL);
	//if (n < 0)
		//s[i] = '-';
	while (i > 0)
	{
		if (n < 0)
		{
			s[i++] = '-';
			n = n * -1;
		}
		if (n == 0)
			s[i++] = '0';
		if (n / 10 != 0)
			ft_itoa(n / 10);
		s[i++] = n % 10 + '0';
	}
	//s[ta_mal(n) + 1] = '\0';
			//if (back / 10 != 0)
			//	back = back / 10;
	//	s[++i] = back % 10 + '0';
	//}
	s[i] = '\0';
	return (s);
}
