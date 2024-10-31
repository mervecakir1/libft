/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:01:35 by mervcaki          #+#    #+#             */
/*   Updated: 2024/10/16 22:55:55 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	k;
	size_t	i;

	if (n <= ft_strlen(dst))
		return (n + ft_strlen(src));
	k = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && k + 1 < n)
	{
		dst[k] = src[i];
		k++;
		i++;
	}
	dst[k] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
