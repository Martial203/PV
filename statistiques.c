#include <stdio.h>
#include <stdlib.h>
#include "enregistrement_etudiant.h"
#include "statistiques.h"

void statistiques(int n, double* pmax, double* pmin, double* pmoy, double* ptaux, double* md5, etudiant eleves[])
{
    int c=0, i;
    *pmax=eleves[1].moyenne;
    *pmin=eleves[1].moyenne;
    *pmoy=0;
    *md5=0;

    for(i=1;i<n;i++)
    {
        if(eleves[i].moyenne<*pmin)
        {
            *pmin=eleves[i].moyenne;
        }
        if(eleves[i].moyenne>*pmax)
        {
            *pmax=eleves[i].moyenne;
        }
        *pmoy=*pmoy+eleves[i].moyenne;
        if(eleves[i].moyenne>=10)
        {
            c++;
        }
        if(eleves[i].moyenne<=5)
        {
            *md5++;
        }
    }
    *pmoy=*pmoy/n;
    *ptaux=(100*c)/n;
}
