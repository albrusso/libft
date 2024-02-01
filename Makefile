# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albrusso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 14:16:03 by albrusso          #+#    #+#              #
#    Updated: 2022/11/16 12:15:30 by albrusso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                  CONFIG                                      #
################################################################################

NAME	=	libft.a
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I.
RM		=	rm -f

################################################################################
#                                  COLORS                                      #
################################################################################

GREEN	=	\033[38;5;76m
RED		=	\033[38;5;160m
YELLOW	=	\033[38;5;226m
ORANGE	=	\033[38;5;202m
PURPLE	=	\033[38;5;213m
LBLUE	=	\033[38;5;51m
BLUE	=	\033[38;5;117m
INDI	=	\033[38;5;99m
RESET	=	\033[00m

################################################################################
#                                   FILES                                      #
################################################################################
SRCS	=	ft_isalnum.c      \
			ft_isprint.c      \
			ft_memcmp.c       \
			ft_putchar_fd.c   \
			ft_split.c        \
			ft_strlcat.c      \
			ft_strncmp.c      \
			ft_substr.c       \
			ft_atoi.c         \
			ft_isalpha.c      \
			ft_itoa.c         \
			ft_memcpy.c       \
			ft_putendl_fd.c   \
			ft_strchr.c       \
			ft_strlcpy.c      \
			ft_strnstr.c      \
			ft_tolower.c      \
			ft_bzero.c        \
			ft_isascii.c      \
			ft_memmove.c      \
			ft_putnbr_fd.c    \
			ft_strdup.c       \
			ft_strlen.c       \
			ft_strrchr.c      \
			ft_toupper.c      \
			ft_calloc.c       \
			ft_isdigit.c      \
			ft_memchr.c       \
			ft_memset.c       \
			ft_putstr_fd.c    \
			ft_strjoin.c      \
			ft_strmapi.c      \
			ft_strtrim.c      \
			ft_striteri.c     \
			ft_lstadd_back.c  \
			ft_lstadd_front.c \
			ft_lstclear.c     \
			ft_lstdelone.c    \
			ft_lstiter.c      \
			ft_lstlast.c      \
			ft_lstnew.c       \
			ft_lstsize.c

################################################################################
#                                   MAKE                                       #
################################################################################

OBJS	=	$(SRCS:.c=.o)

all:		header $(NAME)

header:
	@echo "$(ORANGE)Name:$(RESET)    libft"
	@echo "$(ORANGE)Author:  $(RESET)albrusso$(RESET)"
	@echo "$(ORANGE)Version: $(RESET)v 1.0$(RESET)"
	@echo

$(NAME):	$(OBJS)
			@ ar rcs $(NAME) $(OBJS)
			@echo "$(BLUE)libft $(GREEN)compiled!$(RESET)"

clean:
			@ $(RM) $(OBJS)
			@echo "$(BLUE)libft objects file $(YELLOW)removed!$(RESET)"

fclean:		clean
			@ $(RM) $(NAME)
			@echo "$(BLUE)libft.a $(YELLOW)removed!$(RESET)"

re:			fclean all

PHONY:		all header clean fclean re

.SILENT:
