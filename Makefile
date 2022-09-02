NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		 ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memmove.c \
		 ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		 ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
		 ft_strnstr.c ft_calloc.c ft_strdup.c ft_atoi.c ft_putchar_fd.c \
		 ft_putstr_fd.c ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_striteri.c \
		 ft_strmapi.c

OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
	   ft_strlen.o ft_memset.o ft_bzero.o ft_memmove.o ft_memcpy.o ft_strlcpy.o \
	   ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o \
	   ft_memchr.o ft_memcmp.o ft_strnstr.o ft_calloc.o ft_strdup.o ft_atoi.o ft_putchar_fd.o \
	   ft_putstr_fd.o ft_putendl_fd.o ft_substr.o ft_strjoin.o ft_striteri.o ft_strmapi.o \

LIB = ./libft-war-machine/

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS) : $(CFILES)
	gcc $(CFLAGS) -c $(CFILES)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

test1 :
	bash $(LIB)grademe.sh -op1

test2 :
	bash $(LIB)grademe.sh -op2

strlcat :
	gcc $(CFLAGS) ft_strlcat.c ft_strlen.c ft_memset.c -lbsd

deep : 
	vim $(LIB)deepthought

re : fclean all
