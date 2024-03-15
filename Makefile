# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albrusso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 14:16:03 by albrusso          #+#    #+#              #
#    Updated: 2024/03/15 19:54:32 by albrusso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                  CONFIG                                      #
################################################################################

NAME	=	libft.a
CC		=	gcc
CFLAGS	=	-Wall -Wextra -g
OBJDIR	=	.obj

################################################################################
#                                  COLORS                                      #
################################################################################

GREEN	=	\033[0;32m
YELLOW	=	\033[1;33m
RED		=	\033[0;31m
DEFAULT	=	\033[0m

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

OBJS	=	$(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

################################################################################
#                                   MAKE                                       #
################################################################################

all:		$(NAME)

$(NAME):	$(OBJS)
	@echo "Building $(NAME) library..."
	@ar rcs $@ $^
	@echo "$(GREEN)Build successful!$(DEFAULT)"

$(OBJDIR)/%.o:%.c | $(OBJDIR)
	@echo "Compiling... $<"
	@$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@echo "$(YELLOW)Cleaning object files...$(DEFAULT)"
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "$(RED)Removing $(NAME) library...$(DEFAULT)"
	@rm -f $(NAME)

re:	fclean all
.PHONY: all clean fclean
