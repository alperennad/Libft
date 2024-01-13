/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirca <ademirca@student.42.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 03:52:23 by ademirca          #+#    #+#             */
/*   Updated: 2024/01/13 13:04:04 by ademirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*new;

	len = ft_strlen(s1) + 1;
	new = malloc(len);
	if (!new)
		return (NULL);
	return ((char *)ft_memcpy(new, s1, len));
}
