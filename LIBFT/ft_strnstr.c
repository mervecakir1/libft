/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:53:23 by mervcaki          #+#    #+#             */
/*   Updated: 2024/10/31 20:20:54 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	src_i;
	size_t	need_i;

	if (*needle == '\0')
		return ((char *)haystack);
	src_i = 0;
	while (haystack[src_i] && src_i < len)
	{
		need_i = 0;
		while (haystack[src_i + need_i] == needle[need_i] && (src_i + need_i) < len)
		{
			if (needle[need_i + 1] == '\0')
				return ((char *)&haystack[src_i]);
			need_i++;
		}
		src_i++;
	}
	return (0);
}
