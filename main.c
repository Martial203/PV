#include <stdio.h>
#include <stdlib.h>
#include "enregistrement_etudiant.h"
#include "accueil.h"

etudiant eleves[5];

int main()
{
    int choix=0, continuation=1,nombre_eleves=1,niveau=0,moins_de_5=0;
    double note_maximale, note_minimale, taux_admission, moyenne_gene;
    char nom_enseignant[30], nom_UE[100], filiere[20];
    int FERMETURE=0;

do
{
    choix=accueil();
    continuation=1;
    if (choix==1)
    {
        printf("Entrer le nom de la filiere: ");
        scanf("%s",filiere);
        printf("Entrer le niveau: ");
        scanf("%d",&niveau);
        printf("Intitule de l'UE: ");
        scanf("%s",nom_UE);
        do
        {
            continuation=inscription(nombre_eleves,eleves);
            nombre_eleves++;
        }
        while(continuation==1);
    }
    else if (choix==2)
    {
        insertion_de_notes(nombre_eleves,eleves);
        rangs(nombre_eleves,eleves);
        statistiques(nombre_eleves,&note_maximale,&note_minimale,&moyenne_gene,&taux_admission,&moins_de_5,eleves);
        printf("Veuillez entrer le nom de l'enseignant\n");
        scanf("%s",nom_enseignant);
    }
    else if (choix==3)
    {
        generer_pv(nombre_eleves,eleves,nom_enseignant,nom_UE,filiere,niveau,note_minimale,note_maximale,taux_admission,moyenne_gene,moins_de_5);
        FERMETURE=1;
    }
    else
    {
        printf("Votre choix n'apparait pas parmis les propositions, veuillez recommencer\n");
    }
}
while (FERMETURE==0);
    return 0;
}
