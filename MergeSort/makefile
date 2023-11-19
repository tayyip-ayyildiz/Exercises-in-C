# compilateur
CC := gcc
# options de compilation
CFLAGS := -std=c99 -Wall -Wextra -pedantic -ggdb -Wno-unused-variable -Wno-unused-parameter
EXEC := ex2

# all est la cible choisie par défaut par la commande make
# elle dépend de la règle $(EXEC), qui va être réalisée
# NOTE --- les cibles ne doivent pas avoir le même nom qu'un fichier
all : $(EXEC)

# déclaration des fichiers objets nécessaires à la création de $(EXEC)
# exécutée avec la commande make $(EXEC)
$(EXEC) : ex2.o main2.o
# instructions de compilation
# $@ fait référence à la cible, $^ aux dépendances
	$(CC) $(CFLAGS) -o $@ $^


%.o : %.c

	$(CC) $(CFLAGS) -o $@ -c $<


clean : 
	rm *.o  $(EXEC)

run : $(EXEC)
	./$(EXEC)

valgrind: 
	valgrind --leak-check=full ./$(EXEC)
