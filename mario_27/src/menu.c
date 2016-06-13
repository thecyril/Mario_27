/*
** menu.c for menu in /home/puccioc/rendu/infographie/gfx_tekadventure/src
** 
** Made by Cyril Puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sat Apr 16 16:38:16 2016 Cyril Puccio
** Last update Sun Apr 17 13:45:53 2016 cyril puccio
*/

#include "scroller.h"

int		menu(t_var *var, t_varloop loop)
{
  (void)loop;
  bunny_blit(&var->win->buffer, var->menu, &var->start);
  if (var->mouse->x >= 700 && var->mouse->x <= 1200
      && var->mouse->y >= SCREEN_H - 400 && var->mouse->y <= SCREEN_H - 350)
    if (loop.click[BMB_LEFT] == 1)
      {
	bunny_delete_sound(&var->music->sound);
	sound(var, "music/game.ogg");
	return (1);
      }
  return (0);
}
