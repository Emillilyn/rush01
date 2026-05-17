/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 14:16:05 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/17 14:16:34 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	parse_input(char *str, int *clues)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
			clues[i / 2] = str[i] - '0';
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}
