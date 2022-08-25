#ifndef ENREGISTREMENT_ETUDIANT_H_INCLUDED
#define ENREGISTREMENT_ETUDIANT_H_INCLUDED



#endif // ENREGISTREMENT_ETUDIANT_H_INCLUDED

typedef struct etudiant etudiant;
struct etudiant
{
    char matricule[10];
    char nom[20];
    char prenom[20];
    char genre[10];
    int annee_de_naissance;
    int mois_de_naissance;
    int jour_de_naissance;
    char lieu_de_naissance[20];
    double tp;
    double cc;
    double examen;
    double moyenne;
    int rang;
};
