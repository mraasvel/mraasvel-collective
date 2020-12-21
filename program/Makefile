# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mraasvel <mraasvel@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/21 16:53:20 by mraasvel      #+#    #+#                  #
#    Updated: 2020/12/21 19:28:44 by mraasvel      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ascii.out
SRC = $(shell find $(SRCDIR) -name "*.c" -exec basename {} \;)
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
HEADERS = $(IDIR)/ascii.h

# DIRS

SRCDIR = src
OBJDIR = obj
IDIR = include

# COMPILATION

CC = gcc
CFLAGS = -Wall -Werror -Wextra
DFLAGS = -O0 -g -fsanitize=address
IFLAGS = -I $(IDIR)

all: $(NAME)
.PHONY: all clean fclean re

$(NAME): $(OBJ)
	$(CC) -o $@ $(OBJ) $(DFLAGS)
$(OBJDIR)/%.o: $(SRCDIR)/%.c $(HEADERS) | $(OBJDIR)
	$(CC) -c -o $@ $< $(CFLAGS) $(IFLAGS)

$(OBJDIR):
	@mkdir -p obj

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
