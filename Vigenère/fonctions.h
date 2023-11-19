#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

char **Vigenere();

char *chiffrer(char *c, char **, char *cle);

char *dechiffrer(char *c, char **, char *cle);

char **Vigenere_random();

void liberer_tout(char **c);

#endif
