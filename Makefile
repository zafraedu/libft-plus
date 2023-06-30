NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -rf

# busca todos los archivos .c en la carpeta src
SRCS = $(wildcard $(SRC_DIR)/*.c)
# reemplaza la ruta src por obj y cambia la extensión .c a .o
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

#########################  directorios(rutas)  #################################
OBJ_DIR = obj
SRC_DIR = src
INC_DIR = inc

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
	@echo "\n$(G)[Compiled $(C)'$@' $(G)successfully 🛠  ✅]\n$(END)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/libft.h
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJ_DIR)
	@echo "\n$(Y)[Cleaned $(C) $(NAME) objects $(Y)successfully 🧹 ✅]\n$(END)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(R)[Removed $(C)'$(NAME)' $(R)successfully 🔥 ✅]\n$(END)"

re: fclean all

.PHONY: all clean fclean re
