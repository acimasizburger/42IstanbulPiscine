/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alturan <alturan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:02:44 by alturan           #+#    #+#             */
/*   Updated: 2024/01/28 18:22:28 by alturan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int len, char first_char, char middle_char, char last_char)
{
	int	letter_counter;

	letter_counter = 1;
	while (letter_counter <= len)
	{
		if (letter_counter == 1)
			ft_putchar(first_char);
		else if (letter_counter == len)
			ft_putchar(last_char);
		else
			ft_putchar(middle_char);
		letter_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_counter;

	line_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (line_counter <= y)
		{
			if (line_counter == 1 || line_counter == y)
			{
				ft_print(x, 'A', 'B', 'C');
			}
			else
				ft_print(x, 'B', ' ', 'B');
			line_counter++;
		}
	}
	else
		write(1, "Error", 5);
}

/*
rush(5,4);
ABBBC
B   B
B   B
ABBBC
*/
