/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:09:30 by mervcaki          #+#    #+#             */
/*   Updated: 2024/10/19 19:28:43 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, (int)*s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, (int)s1[len - 1]))
		len--;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len + 1);
	return (result);
}
