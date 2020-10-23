/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:14:40 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/28 17:06:10 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 65 && c <= 90))
	{
		c = c + 32;
	}
	return (c);
}

/*
**int	main()
**{
**	int	c;
**	c = c + 32;
**	printf("%c\n", ft_tolower('A'));
**	printf("%c\n", tolower('A'));
**}
*/