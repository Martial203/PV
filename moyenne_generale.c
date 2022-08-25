#include <stdio.h>
#include <stdlib.h>
#include "enregistrement_etudiant.h"
#include "moyenne_generale.h"

double moyenne_generale(int n,etudiant eleves[])
{
    double resultat=0;
    int i;
    for(i=1;i<n;i++)
    {
        resultat=resultat+eleves[i].moyenne;
    }
    resultat=resultat/n;
    return resultat;
}
