/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:03:22 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/26 11:56:46 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*der;

	der = 0;
	while (*s)
	{
		if (*s == c)
			der = (char*)s;
		s++;
	}
	if (der)
		return (der);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
