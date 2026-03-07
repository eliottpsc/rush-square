/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:28:21 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/07 21:24:44 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	h(int);
void	v(int);

int rush(int x, int y)
{
	h(x);
	write(1, "\n", 1);
	v(x);
	write(1, "\n", 1);
	h(x);
	write(1, "\n", 1);
}

void	h(int x)
{
	char	c;

	c = '-';
	write(1, "o", 1);
	while ((x - 2) > 0)
	{	
		write(1, &c, 1);
		x--;
	}
	write(1, "o", 1);
}

void    v(int x)
{
        char    c;

        c = ' ';
        write(1, "|", 1);
        while ((x - 2) > 0)
        {
                write(1, &c, 1);
                x--;
        }
        write(1, "|", 1);
}

int	main(void)
{
	rush(5,3);

	return (0);
}

