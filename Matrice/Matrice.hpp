#ifndef MATRICE_H
#define MATRICE_H
    class Matrice
    {
        int nbr_sommet;
        int **M;
        public:
            Matrice(int);
            void Saisie();
            void Afficher();
            ~Matrice();
    };
#endif