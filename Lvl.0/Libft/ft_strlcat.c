/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:45:28 by omathot           #+#    #+#             */
/*   Updated: 2023/03/09 00:51:18 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst,const char *src, size_t dstsize)
{
	size_t	dstl;
	size_t	srcl;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (dstl >= dstsize)
		return (dstsize + srcl);
	ft_strlcpy(&dst[dstl], src, dstsize - dstl);
	return (dstl + srcl);
}
