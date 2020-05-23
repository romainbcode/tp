#include "View.h"
#include <iostream>

View::View()
{

}

int View::demande() 
{
    std::cin >> num;
    return num;
}

void View::afficheur() 
{

    //Fonction qui va afficher le menu dans le main
    std::cout << "Bienvenue sur notre logiciel de traitements d'images " << std::endl;
    std::cout << " ----------Voici le Menu----------- :" << std::endl;
    std::cout << "1: Filtre median" << std::endl;
    std::cout << "2: Filtre gaussien" << std::endl;
    std::cout << "3: Filtre Sobel" << std::endl;
    std::cout << "4: Dilatation" << std::endl;
    std::cout << "5: Erosion" << std::endl;
    std::cout << "6: Filtre Canny" << std::endl;
    std::cout << "7: Operations de seuillages" << std::endl;
    std::cout << "8: Segmentation par croissance de region" << std::endl;
    std::cout << "Quel filtre voulez vous essayez?" << std::endl;

}