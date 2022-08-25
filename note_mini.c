#include <stdio.h>
#include <stdlib.h>
#include "enregistrement_etudiant.h"
#include "note_mini.h"

double note_mini(int n,etudiant eleves[])
{
    double note;
    int compteur,i,u;

    for(i=1;i<n;i++)
    {
        compteur=0;
        for(u=1;u<n;u++)
        {
            if(eleves[i].moyenne>eleves[u].moyenne);
            {
                compteur++;
            }
        }
        if (compteur==0)
        {
            note=eleves[i].moyenne;
        }
    }
    return note;
}
