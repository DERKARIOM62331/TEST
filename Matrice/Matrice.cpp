#include <iostream>
#include "Matrice.hpp"
using namespace std;
Matrice::Matrice(int nbr)
{
    this->nbr_sommet = nbr;
    M = (int**)malloc(sizeof(int)*this->nbr_sommet);
    for(int i=0;i<this->nbr_sommet;i++)
        *M = (int*)malloc(sizeof(int)*this->nbr_sommet);
}
void Matrice::Saisie()
{
    for(int i=0 ; i<this->nbr_sommet ; i++)
    {
        for(int j=0 ; j<this->nbr_sommet ; j++)
        {
            cout << "[" << i  << "]" << "[" << j << "] : " << endl;
            cin >> M[i][j];
        }
    }
}
void Matrice::Afficher()
{
    for(int i=0 ; i < nbr_sommet ; i++)
    {
        for(int j=0 ; j < nbr_sommet ; j++ )
        {
            cout << "[" << i << "]" << "[" << j << "] = " << M[i][j] << endl;
        }
    }
}
Matrice::~Matrice()
{
    free(M);
}
