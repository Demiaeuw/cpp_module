# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/02 14:42:10 by acabarba          #+#    #+#              #
#    Updated: 2025/01/02 15:21:01 by acabarba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'exécutable
NAME = zombieHorde

# Compilateur et options
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fichiers sources
SRC = 	main.cpp\
		Zombie.cpp\
		zombieHorde.cpp

# Dossier pour les fichiers objets
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

# Règle par défaut : compilation
all: $(NAME)
	@echo "✅ Compilation terminée avec succès pour $(NAME)"

# Création de l'exécutable
$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	

# Règle pour compiler les fichiers objets
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets
clean:
	rm -rf $(OBJ_DIR)
	@echo "🧹 Fichiers objets supprimés"

# Règle pour nettoyer tout (y compris l'exécutable)
fclean: clean
	rm -f $(NAME)
	@echo "🧼 Nettoyage complet effectué"

# Règle pour recompiler entièrement
re: fclean all

# Évite que make considère ces règles comme des fichiers
.PHONY: all clean fclean re
