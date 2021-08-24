/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmendes- <cmendes-@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 21:57:32 by cmendes-          #+#    #+#             */
/*   Updated: 2021/07/22 21:57:32 by cmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	int	n_linhas(char const *e, char f)
{
	int		i;
	int		ii;

	i = 0;
	ii = 0;
	while (e[i] != '\0')
	{
		while (e[i] == f)
			i++;
		while ((e[i] != f) && (e[i] != '\0'))
			i++;
		if ((e[i] == f) && (e[i + 1] != '\0'))
			ii++;
	}
	return (ii + 2);
}

static int	tam_mal(char const *e, char f)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (e[i] != '\0')
	{
		while (e[i] == f)
			i++;
		while ((e[i] != f) && (e[i] != '\0'))
		{
			i++;
			m++;
		}
		if (e[i] == f)
			m++;
	}
	printf("TAMANHO DE MALLOC 1:%i\n", m);
	return (m);
}

static char	*str_clean(char const *e, char f)
{
	int		i;
	int		ii;
	char	*str;

	ii = 0;
	str = (char *) malloc(tam_mal(e, f) * sizeof(char));
	i = 0;
	while (e[i] != '\0')
	{
		while (e[i] == f)
			i++;
		while ((e[i] != f) && (e[i] != '\0'))
		{
			str[ii] = e[i];
			i++;
			ii++;
		}
		if ((e[i] == f) && (e[i + 1] != '\0'))
		{
			str[ii] = f;
			ii++;
		}
	}
	printf("STRING LIMPA:%s\n", str);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*all;
	char	*clean;
	int		i;
	int		m;
	int		n;
	int		j;

	n = 0;
	i = 0;
	j = 0;
	m = 0;
	str = (char **) malloc(n_linhas(s,c)*sizeof(char*));
	clean = str_clean(s, c);
	while (clean[i] != '\0')
	{
		while ((s[i] != c) && (s[i] != '\0'))
		{
			i++;
			m++;
		}
		str[n] = (char *) malloc((m+1) * sizeof (char));
		all = str[n];
		i = i - m;
		m = 0;
		while ((s[i] != c) && (s[i] != '\0'))
		{
			all[j++] = s[i++];
			//i++;
			//j++;
		}
		all[j] = '\0';
		n++;
		j = 0;
		i++;
		}
	}
}	
	if (s[i] == '\0')
		str[n] = NULL;
	return(str);
}
int main ()
{
	char s[]= "oi,tudo,bem?,,,";
	printf("RESULTADO: %s\n", *ft_split(s,','));
	return (0);
}
