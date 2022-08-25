#include <stdio.h>
#include <stdlib.h>
#include "enregistrement_etudiant.h"
#include "inscription.h"

int inscription (int i,etudiant eleves[])
{
    int continuer=1;
    printf("Entrer le Matricule de l'etudiant    ");
    scanf("%s",eleves[i].matricule);
    printf("\n");
    printf("Entrer le nom de l'etudiant    ");
    scanf("%s",&eleves[i].nom);
    printf("\n");
    printf("Entrer le prenom de l'etudiant    ");
    scanf("%s",&eleves[i].prenom);
    printf("\n");
    printf("Entrer le genre    ");
    scanf("%s",&eleves[i].genre);
    printf("\n");
    printf("Entrer l'annee de naissance    ");
    scanf("%d",&eleves[i].annee_de_naissance);
    printf("\n");
    printf("Entrer le mois de naissance    ");
    scanf("%d",&eleves[i].mois_de_naissance);
    printf("\n");
    printf("Entrer le jour de naissance    ");
    scanf("%d",&eleves[i].jour_de_naissance);
    printf("\n");
    printf("Entrer le lieu de naissance    ");
    scanf("%s",&eleves[i].lieu_de_naissance);
    printf("\n");
    printf("Inscription reussie. Voulez vous faire une nouvelle inscription ? \n");
    printf("1.Oui                             2.Non(Retour a la page d'accueil\n");
    scanf("%d",&continuer);
    printf("\n\n");
    return continuer;
}
