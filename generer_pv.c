#include <stdio.h>
#include <stdlib.h>
#include "enregistrement_etudiant.h"
#include "generer_pv.h"

void generer_pv(int n, etudiant eleves[],char nom_enseignant[],char nom_UE[],char filiere[],int niveau,double note_minimale,double note_maximale,double pourcentage_de_reussite,double moyenne_generale, double moins_de_5)
{
    int i;
    FILE* fichier=NULL;
    fichier=fopen("PV.txt","w");
    if(fichier!=NULL)
    {
        for(i=1;i<n;i++)
        {
            fprintf(fichier,"      ECOLE SUPERIEURE INTERNATIONALE DE GENIE NUMERIQUE\n");
            fprintf(fichier,"Matricule: %s\n",eleves[i].matricule);
            fprintf(fichier,"Noms et Prenoms: %s %s\n",eleves[i].nom,eleves[i].prenom);
            fprintf(fichier,"Genre: %s\n",eleves[i].genre);
            fprintf(fichier,"Nee le %d/%d/%d a %s\n",eleves[i].jour_de_naissance,eleves[i].mois_de_naissance,eleves[i].annee_de_naissance,eleves[i].lieu_de_naissance);
            fprintf(fichier,"Filiere: %s\n",filiere);
            fprintf(fichier,"Niveau: %d\n\n",niveau);
            fprintf(fichier,"            Resultats en %s\n",nom_UE);
            fprintf(fichier,"            Enseignant: %s\n",nom_enseignant);
            fprintf(fichier,"Note TP: %.2f/10\n",eleves[i].tp);
            fprintf(fichier,"Note CC: %.2f/30\n",eleves[i].cc);
            fprintf(fichier,"Note Examen: %.2f/60\n",eleves[i].examen);
            fprintf(fichier,"Note Finale: %.2f/20\n",eleves[i].moyenne);
            fprintf(fichier,"Rang: %d e\n",eleves[i].rang);
            fprintf(fichier,"         Statistiques generales\n");
            fprintf(fichier,"Taux de validation: %.2f pour cent\n",pourcentage_de_reussite);
            fprintf(fichier,"Meilleure note: %.2f /20\n",note_maximale);
            fprintf(fichier,"Derniere note: %.2f /20\n",note_minimale);
            fprintf(fichier,"Moyenne generale: %.2f /20\n\n\n\n",moyenne_generale);
        }
        fprintf(fichier,"Nombre d'etudiants ayant obtenus une note inferieure ou egale a 5/20: %.0f\n",moins_de_5);
        fclose(fichier);
        printf("PV genere avec succes!!!\n\n");
    }
    else
    {
        printf("La generation du PV a echoue\n\n");
    }
}
