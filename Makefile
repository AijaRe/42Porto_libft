# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 11:38:57 by arepsa            #+#    #+#              #
#    Updated: 2023/04/22 16:29:54 by arepsa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a
		
SRCS =	ft_atoi.c		ft_bzero.c		ft_calloc.c\
		ft_isalnum.c	ft_isalpha.c	ft_isascii.c\
		ft_isdigit.c	ft_isprint.c	ft_itoa.c\
		ft_memchr.c		ft_memcmp.c		ft_memcpy.c\
		ft_memmove.c	ft_memset.c		ft_putchar_fd.c\
		ft_putendl_fd.c	ft_putnbr_fd.c	ft_putstr_fd.c\
		ft_split.c		ft_strchr.c		ft_strdup.c\
		ft_striteri.c	ft_strjoin.c	ft_strlcat.c\
		ft_strlcpy.c	ft_strlen.c		ft_strmapi.c\
		ft_strncmp.c	ft_strnstr.c	ft_strrchr.c\
		ft_strtrim.c	ft_substr.c		ft_tolower.c\
		ft_toupper.c
	
BONUS = ft_lstnew.c     ft_lstadd_front.c	ft_lstsize.c\
		ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c\
		ft_lstclear.c	ft_lstmap.c			ft_lstiter.c     

CC	:= cc
CFLAGS	:= -Wall -Wextra -Werror
CPPFLAGS = -I. #include header files that are in the current directory
LIBFLAGS	:= ar -rcs #create and index library
RM	:= /bin/rm -f
SRCS_O	:= $(SRCS:.c=.o) #substitute .c with .o
BONUS_O	:= $(BONUS:.c=.o)

#create and index library (ar - archive, -r insert files by replacement, -c create the archve, -s index the files

#create .o files; also default compilation
# $< first prerequisite aka .c; $@ output/targer file aka .o
#%.o : %.c
#	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

#default target - create libft.a
all: $(NAME)

#Mandatory part
$(NAME): $(SRCS_O)
	$(LIBFLAGS) $(NAME) $(SRCS_O)

#Bonus part
bonus: $(NAME) $(BONUS_O)
	$(LIBFLAGS) $(NAME) $(BONUS_O)

#remove .o files
clean:
	$(RM) $(SRCS_O) $(BONUS_O)

#remove static library
fclean: clean
	$(RM) $(NAME)

#reset environment - remove everything and recompile
re: fclean all

#targets declared as .PHONY will force the command even if there is a subdirectory or file with it's name
.PHONY: all clean fclean re bonus
