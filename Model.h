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
	void dilate();
	void erosion();
	void canny();
	void seuillage();
};


