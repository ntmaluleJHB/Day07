/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:07:31 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/16 11:31:30 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


char	*ft_strdup(char*src)
{
	int i;
	i =0;
	
	while (src[i] != '\0')
	{
		i++;
	}
	char *ret;
	ret = (char*)malloc(sizeof(char) *(i + 1));
	i = 0;

	while (src[i] != '\0')
	{
		ret[i] = src [i];
		i++;
	}
	return(ret);


}


