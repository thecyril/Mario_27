/*
** tekpixel.c for tekpixel in /home/puccio_c/rendu/Infographie/gfx_wolf3d/lib/my
**
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
**
** Started on  Thu Dec 24 14:42:12 2015 cyril puccio
** Last update Fri Jun 10 23:11:40 2016 cyril puccio
*/

#include "mario.h"

void            tekpixel(t_bunny_pixelarray	*pix,
                         t_bunny_position	*pos,
                         unsigned int		color)
{
  t_color	couleur;

  couleur.full = color;
  if ((pos->x >= 0 && pos->x < pix->clipable.clip_width)
      &&(pos->y >= 0 && pos->y < pix->clipable.clip_height))
    ((t_color *)pix->pixels)[pos->x + pix->clipable.clip_width * pos->y]
      = couleur;
}
