/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:48:11 by vlacombe          #+#    #+#             */
/*   Updated: 2020/05/21 10:57:41 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			c;
	unsigned char	*d;

	c = 0;
	d = s;
	while (c < n)
	{
		d[c] = 0;
		c++;
	}
}

/*
**int		main(void)
**{
**	size_t		c;
**	c = 0;
**	char	*d;
**	printf("%s\n", bzero(d, c));
**	return (0);
**}
*/
