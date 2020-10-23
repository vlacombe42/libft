/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 17:09:18 by vlacombe          #+#    #+#             */
/*   Updated: 2020/03/04 11:58:07 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	int		v;
	int		t;
	char	*m;

	v = 0;
	t = 0;
	while (s[v] != '\0')
	{
		v++;
	}
	m = (char*)malloc(sizeof(*m) * (v + 1));
	if (!m)
		return (NULL);
	while (t < v)
	{
		m[t] = s[t];
		t++;
	}
	m[t] = '\0';
	return (m);
}

/*
**int	main()
**{
**	printf("%s", ft_strdup("cEcolev\n"));
**	return (0);
**}
*/
