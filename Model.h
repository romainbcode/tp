#pragma once
#include <opencv2/opencv.hpp>

class Model
{
private:

	int numero;

public:

	Model();	
	void median();
	void gaus();
	void sobel();
	void dilates();
	void erosion();
	void canny();
	void seuillage();
};


