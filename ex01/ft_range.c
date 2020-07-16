/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:37:15 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/16 13:02:50 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min,int max)
{
	int size ;
	size = 1;
	int *range1;
	while(min < max)
	{
		range1 = (int*)malloc(sizeof(int) * (size +1));
		range1[size -1] = min;
		min++;
		size ++;
	}
	int i;
	i = 0;
	return(range1);
}


