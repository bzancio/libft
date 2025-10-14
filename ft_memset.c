/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:19:59 by ibuil             #+#    #+#             */
/*   Updated: 2025/10/14 10:41:43 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			pos;

	pos = 0;
	p = (unsigned char)b;
	while (pos < len)
	{
		p[pos] = (unsigned char)c;
		len++;
	}
	return (b);
}
