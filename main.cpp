#include <opencv2/opencv.hpp>
#include <iostream>
#include "Model.h"
#include "View.h"
#include "Controller.h"

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	View view;
	Controller controlleur;

	view.afficheur();

	controlleur.presentation();

	return 0;
}