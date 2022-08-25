#include <stdio.h>
#include <stdlib.h>
#include "enregistrement_etudiant.h"
#include "pourcentage_admis.h"

double pourcentage_admis(int n, etudiant eleves[])
{
    double pourcentage;
    int i, compteur=0;

    for(i=1;i<n;i++)
    {
        if(eleves[i].moyenne>=10)
        {
            compteur++;
        }
    }

    pourcentage=(compteur/n)*100;
    return pourcentage;
}
