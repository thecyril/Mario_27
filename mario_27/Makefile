##
## Makefile for makefile in /home/puccio_c/rendu/Infographie/gfx_tekadventure
## 
## Made by cyril puccio
## Login   <puccio_c@epitech.net>
## 
## Started on  Sun Apr 17 13:47:13 2016 cyril puccio
## Last update Sat Jun 11 00:54:26 2016 cyril puccio
##

NAME    =       mario_27

FLAGS   =	-I/home/${USER}/.froot/lib              \
		-I/home/${USER}/.froot/include

CFLAGS  =       -I include -W -Wall -ansi -pedantic -g3

LAPIN   =       -L/home/${USER}/.froot/lib/ -llapin     \
		-L/usr/local/lib                        \
		-L/home/${USER}/.froot/include          \
		-lsfml-audio                            \
		-lsfml-graphics                         \
		-lsfml-window                           \
		-lsfml-system                           \
		-lstdc++                                \
		-ldl                                    \
		-lm

SRC     =       main.c					\
		src/tekpixel.c				\
		src/mainfile.c				\
		src/landscape.c				\
		src/list.c				\
		src/music.c				\
		src/key.c				\

SRC	+=	utils/xloadpic.c			\
		utils/my_putstr.c			\

OBJ     =       $(SRC:.c=.o)


all     :       $(NAME)

$(NAME) :      	$(OBJ)
		gcc $(SRC) $(LAPIN) $(CFLAGS) $(FLAGS) -o $(NAME) -L.

clean   :
	 	rm -f $(OBJ)

fclean  :
		rm -f $(OBJ)
		rm -f $(NAME)

re      :       fclean all

.PHONY  :       all clean fclean re
