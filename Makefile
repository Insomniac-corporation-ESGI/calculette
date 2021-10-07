CC = gcc								# Nom du compilateur
CFLAGS = -Wall -Wextra -Werror -O3 -lm			# Les flags
RM = rm -f 								# Commande pour supprimer des fichiers
NAME = calc							# Nom de l'exécutable
SRC = *.c src/*.c								# Les fichiers source. Soir *.c, soit on liste les fichiers

all:									# Règle all, exécutée par défaut avec la commande "make"
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)	# On n'utilise que des variables ici. On modifie les variables, pas la ligne de commande

clean:									# Règle clean, pour supprimer les fichiers générés par le compilateur. On utilise "make clean"
	$(RM) $(NAME)

re: clean all							# "make re", pour supprimer les anciens fichiers et les génére à nouveau.
