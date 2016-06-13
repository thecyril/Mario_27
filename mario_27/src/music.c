/*
** music.c for music in /home/puccio_c/rendu/Infographie/gfx_tekadventure
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Apr 15 21:33:08 2016 cyril puccio
** Last update Fri Jun 10 23:24:59 2016 cyril puccio
*/

#include "mario.h"

void            load_music(const char *file, t_var *var)
{
  var->music = bunny_load_music(file);
  if (var->music == NULL)
    {
      my_putstr("failed to open file\n");
      exit(0);
    }
}

void            sound(t_var *var, const char *name)
{
  (void)var;
  load_music(name, var);
  bunny_sound_play(&var->music->sound);
}
