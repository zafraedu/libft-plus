NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -rf

# busca todos los archivos .c en la carpeta src
SRCS = $(wildcard $(SRC_PATH)/*.c)
# addprefix agrega al directorio OBJ los archivos .c tranformados en .o
# OBJS = $(addprefix $(OBJ_PATH)/, $(SRCS:.c=.o))
OBJS = $(patsubst $(SRC_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRCS))


#########################  directorios(rutas)  #################################
OBJ_PATH = obj
SRC_PATH = src
INC_PATH = inc

#########################  Colores  ############################################
R = \033[31;1m
G = \033[32;1m
B = \033[34;1m
M = \033[35;1m
C = \033[36;1m
Y = \033[33;1m
END = \033[0m

#########################  Normas  #############################################
$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)
	@echo "\n$(G)[Compiled $(C)'$@' $(G)successfully]\n$(END)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(INC_PATH)/libft.h
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJ_PATH)
	@echo "\n$(Y)[Cleaned $(C) $(NAME) objects $(Y)successfully]\n$(END)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(R)[Removed $(C)'$(NAME)' $(R)successfully]\n$(END)"

re: fclean all

.PHONY: all clean fclean re
