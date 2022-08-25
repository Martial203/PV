#include <stdio.h>
#include <stdlib.h>
#include "enregistrement_etudiant.h"
#include "rangs.h"

void rangs(int n,etudiant eleves[])
{
    int compteur,i,u;

    for(i=1;i<n+1;i++)
    {
        compteur=0;
        for(u=1;u<n;u++)
        {
            if(eleves[i].moyenne>=eleves[u].moyenne)
            {
                compteur++;
            }
        }
        eleves[i].rang=n-compteur;
    }
}
