#include <stdio.h>
#include <stdlib.h>
#include "accueil.h"

int accueil()
{
    int choix=0;
    printf("BIENVENU SUR LE GESTIONNAIRE DE NOTES\n\n");
    printf("                     Veuillez choisir un option\n\n");
    printf("1.Inscriptions d'etudiants               2.Insertion des notes\n");
    printf("                        3.Generation du PV\n\n\n");
    scanf("%d",&choix);
    return choix;
}
