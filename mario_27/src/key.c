/*
** key.c for key in /home/puccio_c/work/mario_27
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Sat Jun 11 00:51:37 2016 cyril puccio
** Last update Sun Jun 12 11:06:39 2016 cyril puccio
*/

# include "mario.h"

void                    moove(t_var *var, t_varloop loop, int *jp, int *p)
{
  static int		last = 0;

  var->sprite2->clip_width = 90;
  var->sprite->clip_width = 91;
  if (loop.touche[BKS_RIGHT] == 1 || loop.touche[BKS_LEFT]
      || loop.touche[BKS_UP])
    {
      if (*p != 1 && loop.touche[BKS_UP] == 0 && loop.touche[BKS_RIGHT] == 1)
	sprite(var);
      if (*p != 1 && loop.touche[BKS_UP] == 0 && loop.touche[BKS_LEFT] == 1)
        sprite2(var);
      if (loop.touche[BKS_RIGHT] == 1 && (var->land[0]->clip_x_position == 0 ||
					  var->land[0]->clip_x_position == 2950))
	{
	  var->pmario.x += 4;
	  if (loop.touche[BKS_LSHIFT] == 1)
	    var->pmario.x += 4;
	  last = 0;
	}
      if (loop.touche[BKS_LEFT] == 1 &&
	  (var->land[0]->clip_x_position == 0 || var->land[0]->clip_x_position == 2950)
	  && var->pmario.x > 0)
	{
	  if (loop.touche[BKS_LSHIFT] == 1)
	    var->pmario.x -= 4;
	  var->pmario.x -= 4;
	  last = 1;
	}
      if (var->pmario.y < 450)
	*p = 1;
      if (loop.touche[BKS_UP] == 1 && *p == 0)
	{
	  if (last == 0)
	    {
	      var->sprite->clip_x_position = var->arr[3];
	      bunny_blit(&var->win->buffer, var->sprite, &var->pmario);
	      *jp -= 20;
	    }
	  else
	    {
	      var->sprite2->clip_x_position = var->arr[7]; /*  */
              bunny_blit(&var->win->buffer, var->sprite2, &var->pmario);
              *jp -= 20;
	    }
	}
    }
  else if (*p != 1)
    {
      if (last == 0)
	{
	  var->sprite->clip_x_position = var->arr[0];
	  bunny_blit(&var->win->buffer, var->sprite, &var->pmario);
	}
      else
	{
          var->sprite2->clip_x_position = var->arr[6];
          bunny_blit(&var->win->buffer, var->sprite2, &var->pmario);
        }
    }
  if (loop.touche[BKS_UP] == 0 && var->pmario.y < 780)
    *p = 1;
  if (*p == 1)
    {
      if (last == 0)
	{
	  var->sprite->clip_x_position = var->arr[4];
	  bunny_blit(&var->win->buffer, var->sprite, &var->pmario);
	}
      else
	{
	  var->sprite2->clip_x_position = var->arr[0];
          bunny_blit(&var->win->buffer, var->sprite2, &var->pmario);
	}
    }
  if (loop.touche[BKS_RIGHT] == 1 && var->pmario.x >= 900
      && var->land[0]->clip_x_position != 2950)
    {
      var->land[0]->clip_x_position++;
      if (loop.touche[BKS_LSHIFT] == 1)
	var->land[0]->clip_x_position++;
      last = 0;
    }
  if (loop.touche[BKS_LEFT] == 1 && var->land[0]->clip_x_position != 0 &&
      var->land[0]->clip_x_position != 2950)
    {
      var->land[0]->clip_x_position--;
      if (loop.touche[BKS_LSHIFT] == 1)
	var->land[0]->clip_x_position--;
      last = 1;
    }
}
