#include "Controller.h"
#include <iostream>

Controller::Controller()
{

}


void Controller::presentation()
{
	int numero = var1.demande();

	switch (numero)
	{
	case 1:
		model.median(); break;
	case 2:
		model.gaus(); break;
	case 3:
		model.sobel(); break;
	case 4:
		std::cout << "a"; break;
	case 5:
		model.erosion(); break;
	case 6:
		model.canny(); break;
	case 7:
		model.seuillage(); break;
	case 8:
		std::cout << "Disponible via une prochaine mise à jour" << std::endl; break;

	default: std::cout << "Veuillez rentrez un numero entre 1 et 8" << std::endl; break;
	}
}

