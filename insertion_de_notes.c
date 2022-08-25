#include <stdio.h>
#include <stdlib.h>
#include "enregistrement_etudiant.h"
#include "insertion_de_notes.h"

void insertion_de_notes (int n, etudiant eleves[]) //n est le nombre d'etudiants inscrits
{
    int i;
    printf("Insertion des notes des etudiants\n\n");
    for(i=1;i<n;i++)
    {
        printf("\n%s %s\n",eleves[i].nom,eleves[i].prenom);
        printf("TP /10: ");
        scanf("%lf",&eleves[i].tp);
        printf("\n");
        printf("CC /30: ");
        scanf("%lf",&eleves[i].cc);
        printf("\n");
        printf("Examen /60: ");
        scanf("%lf",&eleves[i].examen);
        eleves[i].moyenne=(eleves[i].tp+eleves[i].cc+eleves[i].examen)/5;
        printf("\n\n");
    }
}
