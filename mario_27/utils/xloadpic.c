/*
** xloadpic.c for xloadpic in /home/puccioc/rendu/infographie/gfx_tekadventure
** 
** Made by Cyril Puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sat Apr 16 23:19:36 2016 Cyril Puccio
** Last update Fri Jun 10 23:25:27 2016 cyril puccio
*/

#include "mario.h"

t_bunny_pixelarray	*xloadpic(const char *file)
{
  t_bunny_pixelarray	*tmp;

  if ((tmp = bunny_load_pixelarray(file)) == NULL)
    exit (1);
  return (tmp);
}

t_bunny_picture		*xloadpicture(const char *file)
{
  t_bunny_picture	*tmp;

  if ((tmp = bunny_load_picture(file)) == NULL)
    exit (1);
  return (tmp);
}

void 			*xmalloc (size_t n)
{
  void			*p;

  p = malloc(n);
  if (p == 0)
    exit (1);
  return (p);
}
