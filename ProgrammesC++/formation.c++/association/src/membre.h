#ifndef MEMBRE_H
#define MEMBRE_H


#include<string>
using namespace std;

struct membre{
    string nom;
    string prenom;
    int age;
    int ID;
    string adresse;
    int cotisation[5];
};
void saisir(membre &m);
void ajouter(membre m[],int &t);
void modifier(membre m[],int ID,int &t);
void supprimer(membre m[],int ID,int &t);
void afficher(membre m[],int &t);
int solvable(membre m[],int &t);
void insolvable(membre m[],int &t);
float statistique(membre m[],int &t);
 void recherche(membre m[],int &t,int ID);

#endif