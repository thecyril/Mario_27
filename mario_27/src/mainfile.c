/*
** mainfile.c for mainfile in /home/puccio_c/rendu/Infographie/gfx_tekadventure
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Apr 15 17:46:18 2016 cyril puccio
** Last update Sun Jun 12 11:26:32 2016 cyril puccio
*/

#include "mario.h"

t_bunny_response        key(t_bunny_event_state state,
                            t_bunny_keysym sym,
                            void *_var)
{
  t_var                *var;

  var = _var;
  if (state == GO_DOWN && sym == BKS_ESCAPE)
    return (EXIT_ON_SUCCESS);
  if (state == GO_DOWN && sym == BKS_UP)
    {
    }
  if (state == GO_DOWN && sym == BKS_DOWN)
    {
    }
  if (state == GO_DOWN && sym == BKS_RIGHT)
    {
    }
  if (state == GO_DOWN && sym == BKS_LEFT &&
      var->land[0]->clip_x_position != 0)
    {
    }
  return (GO_ON);
}

t_bunny_response		click(t_bunny_event_state    etat,
                                 t_bunny_mousebutton    clic,
                                 void                   *data)
{
  (void)etat;
  (void)clic;
  (void)data;
  return (GO_ON);
}

t_bunny_response                mainloop(t_var *var)
{
  t_varloop                     loop;
  static int			jp = 794;
  static int			p = 0;
  static int			ground = 794;

  if (jp < ground)
    jp += 8;
  if (jp >= ground)
    p = 0;
  var->pmario.y = jp;
  loop.touche = bunny_get_keyboard();
  var->mouse = bunny_get_mouse_position();
  draw_landscape(var, var->list);
  moove(var, loop, &jp, &p);
  bunny_display(var->win);
  return (GO_ON);
}

int     			mario()
{
  t_var                 	var;

  fill_struct(&var);
  fill_struct2(&var);
  var.list = put_in_list(&var);
  if ((var.win = bunny_start(1920, 1080, false, "Mario_27")) == 0)
    return (-1);
  if (var.pix == NULL)
    return (-1);
  sound(&var, "music/overworld.ogg");
  bunny_display(var.win);
  bunny_set_loop_main_function((t_bunny_loop)mainloop);
  bunny_set_key_response(key);
  bunny_set_click_response(click);
  draw_landscape(&var, var.list);
  bunny_loop(var.win, 80, &var);
  bunny_stop(var.win);
  bunny_delete_clipable(&var.pix->clipable);
  bunny_delete_sound(&var.music->sound);
  return (0);
}
