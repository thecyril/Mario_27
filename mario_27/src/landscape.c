/*
** landscape.c for landscape.c in /home/puccio_c/rendu/Infographie/gfx_scroller/src
**
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
**
** Started on  Sat Mar 19 16:36:44 2016 cyril puccio
** Last update Sun Jun 12 11:05:59 2016 cyril puccio
*/

#include "mario.h"

void                    fill_struct(t_var *var)
{
  var->pix = bunny_new_pixelarray(SCREEN_W, SCREEN_H);
  var->land = xmalloc(sizeof(t_bunny_picture) * 3);
  var->sprite = xloadpicture("img/sprite.png");
  var->sprite2 = xloadpicture("img/sprite2.png");
  var->land[0] = xloadpicture("img/level1.png");
  var->land[0]->clip_width = 400;
  var->land[0]->clip_height = 224;
  var->land[0]->scale.x = 4.8;
  var->land[0]->scale.y = 4.8;
  var->land[1] = NULL;
}

void			fill_struct2(t_var *var)
{
  var->start.x = 0;
  var->start.y = 0;
  var->pmario.x = 20;
  var->pmario.y = 800;
  var->arr[0] = 0;
  var->arr[1] = 90;
  var->arr[2] = 192;
  var->arr[3] = 292;
  var->arr[4] = 404;
  var->arr[5] = 320;
  var->arr[6] = 410;
  var->arr[7] = 110;
  var->couleur = BLACK;
}

void                            draw_landscape(t_var *var, t_list *list)
{
  t_bunny_position              wallp;

  wallp.x = 0;
  wallp.y = 0;
  bunny_blit(&var->win->buffer, list->img, &wallp);
}

void		sprite(t_var *var)
{
  static int	champ = 0;
  static int	nbr = 0;

  var->sprite->clip_y_position = 0;
  if (nbr == 0)
    {
      var->sprite->clip_x_position = var->arr[champ];
      var->sprite->clip_width = 90;
      if (champ == 2)
	champ = 0;
      else
	champ++;
    }
  if (nbr == 10)
    nbr = 0;
  else
    nbr++;
  bunny_blit(&var->win->buffer, var->sprite, &var->pmario);
}

void            sprite2(t_var *var)
{
  static int    champ = 6;
  static int    nbr = 0;

  var->sprite2->clip_y_position = 0;
  if (nbr == 0)
    {
      var->sprite2->clip_x_position = var->arr[champ];
      var->sprite2->clip_width = 90;
      if (champ == 5)
        champ = 6;
      else
        champ--;
    }
  if (nbr == 10)
    nbr = 0;
  else
    nbr++;
  bunny_blit(&var->win->buffer, var->sprite2, &var->pmario);
}
