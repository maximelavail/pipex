NAME = libft.a

SRCS = ft_itoa.c ft_putendl_fd.c ft_putstr_fd.c ft_split.c ft_strcmp.c \
	ft_strjoin.c ft_substr.c ft_putchar_fd.c ft_calloc.c ft_strlen.c ft_strlcpy.c\
	ft_bzero.c \
	

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all