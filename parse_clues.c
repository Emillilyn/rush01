/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_clues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:14:36 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/17 15:16:20 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	parse_clues(char *str, int clues[16])
{
	int	i;

	i = 0;
	while (*str && i < 16)
	{
		while (*str == ' ')
			str++;
		if (*str < '1' || *str > '4')
			return (0);
		clues[i++] = *str - '0';
		str++;
	}
	return (i == 16);
}
