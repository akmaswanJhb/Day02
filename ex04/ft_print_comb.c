/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akmaswan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:32:50 by akmaswan          #+#    #+#             */
/*   Updated: 2020/07/12 13:33:23 by akmaswan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar( char c)
{
write(1, &c, 1);
}

void ft_print_combo(void)
{
char e;
char h;
char g;

e = '0';
h = '0';
g = '0';
while (e <= '7')
	{
		h = e + 1;
		while (h <= '8')
			{ 
			   g = h + 1;
		   		while (g <= '9')
			 		{
						ft_putchar(e);
						ft_putchar(h);
						ft_putchar(g);
						if (e != '7' || h != '8' || g != '9')
							{
							ft_putchar(',');
							ft_putchar(' ');
							}		
						g++;
					}
				h++;
			}
		e++;
	}
}

