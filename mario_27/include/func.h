/*
** my.h for my.h in /home/puccio_c/rendu/Piscine_C_J09/include
**
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
**
** Started on  Fri Oct  9 15:26:13 2015 cyril puccio
** Last update Sat Jun 11 13:47:30 2016 cyril puccio
*/

#ifndef _MY_LIB_
#define _MY_LIB_

#include "struct.h"

void 			*xmalloc (size_t n);
void			sheep(t_var *var, int i);
void                    play_partition(double *duration,
				       double *frequency,
				       t_var *var);
void                    load_music(const char *file, t_var *var);
void                    load_ini_file(double *duration, double *frequency,
                                      t_bunny_ini *ini, t_var *var);
int			mario();
double			gauss(double t, double *p);
void                    cloud(t_var *var, int i);
unsigned int		get_color(t_bunny_pixelarray *pix, int x, int y);
t_bunny_picture         *xloadpicture(const char *file);
void			draw_longtext(t_var *var);
void                    fill_struct(t_var *var);
void                    fill_struct2(t_var *var);
void                    draw_landscape(t_var *var, t_list *list);
t_bunny_pixelarray      *xloadpic(const char *file);
t_bunny_response        mainloop(t_var *var);
t_bunny_response        key(t_bunny_event_state      state,
                            t_bunny_keysym           button,
                            void                     *data);
void                    tekpixel(t_bunny_pixelarray *pix,
                                 t_bunny_position   *pos,
                                 unsigned int       color);
void                    fill_screen(t_var *var, int w, int h);
void                    tekpixel(t_bunny_pixelarray *pix,
                                 t_bunny_position   *pos,
                                 unsigned int       color);
void    pmoove(t_var *var, t_varloop loop);
t_list  *add_end(t_list *list, t_bunny_picture *img);
t_list  *del_inlist(t_list *list);
void    aff_list(t_list *list);
int     len_of_list(t_list *list);
t_list  *put_in_list(t_var *var);
void	moove(t_var *var, t_varloop loop, int *jp, int *p);
void    fleft(t_var *var, t_varloop loop);
void    sprite(t_var *var);
void    sound(t_var *var, const char *name);
void	my_putstr(char *str);
int     my_getnbr(const char *str);
int	menu(t_var *var, t_varloop loop);
int	dialog(t_var *var, t_varloop loop);
void    sprite2(t_var *var);
#endif
