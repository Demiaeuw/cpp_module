# Nom de l'exécutable
NAME = megaphone

# Compilateur et options
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

# Fichiers sources
SRC = megaphone.cpp

# Dossier pour les fichiers objets
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

# Règle par défaut : compilation
all: $(NAME)

# Création de l'exécutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Règle pour compiler les fichiers objets
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets
clean:
	rm -rf $(OBJ_DIR)

# Règle pour nettoyer tout (y compris l'exécutable)
fclean: clean
	rm -f $(NAME)

# Règle pour recompiler entièrement
re: fclean all

# Évite que make considère ces règles comme des fichiers
.PHONY: all clean fclean re
