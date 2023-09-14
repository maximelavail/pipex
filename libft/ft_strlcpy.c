/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximelavail <maximelavail@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:53:03 by maximelavai       #+#    #+#             */
/*   Updated: 2023/09/06 18:53:04 by maximelavai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy( char *dst, const char *src, size_t size)
{
	size_t	i;
	int		res;

	i = 0;
	res = ft_strlen(src);
	if (size == 0)
		return (res);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > i)
		dst[i] = 0;
	return (res);
}
