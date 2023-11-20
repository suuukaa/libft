# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 20:21:00 by sel-bouy          #+#    #+#              #
#    Updated: 2023/11/16 10:31:37 by sel-bouy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SCRS = ft_isalpha.c \
       ft_isdigit.c  \
       ft_isalnum.c  \
       ft_isascii.c \
       ft_isprint.c  \
       ft_strlen.c  \
       ft_memset.c   \
       ft_bzero.c    \
       ft_memcpy.c   \
       ft_memmove.c  \
       ft_strlcpy.c  \
       ft_strlcat.c  \
       ft_toupper.c  \
       ft_tolower.c  \
       ft_strchr.c   \
       ft_strrchr.c   \
       ft_strncmp.c  \
       ft_memchr.c   \
       ft_memcmp.c   \
       ft_strnstr.c   \
       ft_atoi.c  \
       ft_calloc.c  \
       ft_strdup.c  \
       ft_substr.c  \
       ft_strjoin.c  \
       ft_strtrim.c  \
       ft_split.c   \
       ft_itoa.c   \
       ft_strmapi.c   \
       ft_striteri.c \
       ft_putchar_fd.c  \
       ft_putstr_fd.c  \
       ft_putendl_fd.c  \
       ft_putnbr_fd.c  

SCRSbb = ft_lstnew_bonus.c \
       ft_lstadd_front_bonus.c \
       ft_lstsize_bonus.c  \
       ft_lstlast_bonus.c  \
        ft_lstadd_back_bonus.c  \
        ft_lstdelone_bonus.c  \
        ft_lstclear_bonus.c  \
        ft_lstiter_bonus.c  \
      #  ft_lstmap_bonus.c

OBJS = $(SCRS:.c=.o)

OBJSbb = $(SCRSbb:.c=.o)

CC = cc -Wall -Wextra -Werror

AR = ar -rc

RM = rm -f

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: all $(OBJSbb)
	$(AR) $(NAME) $(OBJSbb) $(OBJS)
all : $(NAME)

%.o: %.c libft.h
	$(CC) -c $< -o $@

clean :
	$(RM) $(OBJS) $(OBJSbb)

fclean : clean
	$(RM) $(NAME)

re : fclean all
    
.PHONY : all bonus clean fclean re