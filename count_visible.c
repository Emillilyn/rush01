/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visible.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evavrinu <evavrinu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:50:11 by evavrinu          #+#    #+#             */
/*   Updated: 2026/05/17 17:50:13 by evavrinu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible(int *line, int size)
{
	int	visible;
	int	max_seen;
	int	i;

	visible = 0;
	max_seen = 0;
	i = 0;
	while (i < size)
	{
		if (line[i] > max_seen)
		{
			max_seen = line[i];
			visible++;
		}
		i++;
	}
	return (visible);
}
