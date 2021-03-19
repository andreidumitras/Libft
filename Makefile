# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adumitra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/26 21:07:55 by adumitra          #+#    #+#              #
#    Updated: 2017/08/28 16:40:54 by adumitra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
	  ft_lstadd.c \
	  ft_memchr.c \
	  ft_putendl.c \
	  ft_strclr.c \
	  ft_strjoin.c \
  	  ft_strnequ.c \
	  ft_tolower.c \
	  ft_bzero.c \
	  ft_lstdel.c \
	  ft_memcmp.c \
	  ft_putendl_fd.c \
	  ft_strcmp.c \
	  ft_strlcat.c \
	  ft_strnew.c \
	  ft_toupper.c \
	  ft_isalnum.c \
	  ft_lstdelone.c \
	  ft_memcpy.c \
	  ft_putnbr.c \
	  ft_strcpy.c \
	  ft_strlen.c \
	  ft_strnstr.c \
	  ft_isalpha.c \
	  ft_lstiter.c \
	  ft_memdel.c \
  	  ft_putnbr_fd.c \
	  ft_strdel.c \
	  ft_strmap.c \
	  ft_strrchr.c \
	  ft_isascii.c \
	  ft_lstmap.c \
	  ft_memmove.c \
	  ft_putstr.c \
	  ft_strdup.c \
	  ft_strmapi.c \
	  ft_strsplit.c \
	  ft_isdigit.c \
	  ft_lstnew.c \
	  ft_memset.c \
	  ft_putstr_fd.c \
	  ft_strequ.c \
	  ft_strncat.c \
	  ft_strstr.c \
	  ft_isprint.c \
	  ft_memalloc.c \
	  ft_putchar.c \
	  ft_strcat.c \
	  ft_striter.c \
	  ft_strncmp.c \
	  ft_strsub.c \
	  ft_itoa.c \
	  ft_memccpy.c \
	  ft_putchar_fd.c \
	  ft_strchr.c \
	  ft_striteri.c \
	  ft_strncpy.c \
	  ft_strtrim.c \
	  ft_strupcase.c \
	  ft_strlowcase.c \
	  ft_strrev.c \
	  ft_swap.c \
	  ft_lstpush_back.c \
	  ft_lstpush_front.c \
	  ft_strcharcpy.c \
	  ft_strjoinch.c \
	  get_next_line.c \
	  ft_strjump.c \
	  ft_strjump_blank.c \
	  ft_strlen_untilch.c \
	  ft_atoi_base.c \
	  ft_isblank.c \
	  ft_strjump_alpha.c \
	  ft_strjump_digit.c \
	  ft_strswap.c \
	  ft_strrigth.c \
	  ft_strleft.c \
	  ft_strrstr.c \
	  get_next_line.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I.
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
