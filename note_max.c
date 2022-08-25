#include <stdio.h>
#include <stdlib.h>
#include "enregistrement_etudiant.h"
#include "note_max.h"

double note_max(int n,etudiant eleves[])
{
    double max;
    int i=1, u=1, compteur=0;
        for(i=1;i<n;i++)
    {
        compteur=0;
        for(u=1;u<n;u++)
        {
            if (eleves[i].moyenne<eleves[u].moyenne)
            {
                compteur++;
            }
        }
        if(compteur==0)
        {
            max=eleves[i].moyenne;
        }
    }
    return max;
}
