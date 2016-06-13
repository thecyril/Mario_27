/*
** my_putstr.c for my_putstr in /home/puccioc/rendu/infographie/gfx_tekadventure
** 
** Made by Cyril Puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sat Apr 16 12:56:14 2016 Cyril Puccio
** Last update Fri Jun 10 23:26:05 2016 cyril puccio
*/

#include "mario.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int     my_isneg(const char *str)
{
  int   i;
  int   counter;

  i = 0;
  counter = 0;
  while (str[i] < '0' || str[i] > '9')
    {
      if (str[i] == '-')
        counter++;
      i++;
    }
  if (counter % 2 == 0)
    return (0);
  else
    return (1);
}

int     my_isnum(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int     my_getnbr(const char *str)
{
  int   i;
  int   nb;

  i = 0;
  nb = 0;
  while (my_isnum(str[i]) == 0)
    i++;
  while (my_isnum(str[i]) == 1)
    {
      nb = ((nb * 10) + (str[i] - 48));
      i++;
    }
  if (my_isneg(str) == 1)
    nb = nb * (-1);
  return (nb);
}
