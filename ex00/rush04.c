/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 01:40:36 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/08 04:32:16 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
char	choix_de_lettre(int ligne, int colonne, int x, int y);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ligne;
	int	colonne;

	ligne = 1;
	colonne = 1;
	while (ligne <= y)
	{
		while (colonne <= x)
		{
			ft_putchar(choix_de_lettre(ligne, colonne, x, y));
			colonne++;
		}
		ft_putchar('\n');
		colonne = 1;
		ligne++;
	}
}

char	choix_de_lettre(int ligne, int colonne, int x, int y)
{
	if (ligne == 1)
	{
		if (colonne == 1)
			return ('A');
		else if (colonne == x)
			return ('C');
		else
			return ('B');
	}
	else if (ligne == y)
	{
		if (colonne == 1)
			return ('C');
		else if (colonne == x)
			return ('A');
		else
			return ('B');
	}
	else
	{
		if ((colonne == 1) || (colonne == x))
			return ('B');
		else
			return (' ');
	}
}

void	ft_putchar(char lettre)
{
	write(1, &lettre, 1);
}

int	main(void)
{
	rush(5, 7);
	rush(1, 1);
	rush(1, 5);
	rush(7, 1);
	return (0);
}
