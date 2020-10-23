/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:01:35 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/28 17:41:59 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *s1;

	s1 = (char *)s;
	while (*s1 != '\0' && *s1 != c)
		s1++;
	return (*s1 == c ? s1 : NULL);
}

/*
**int main()
**{
**	char *v;
**	v = ft_strchr("ancvjhd", 'c');
**	printf("%s\n", v);
**}
*/
