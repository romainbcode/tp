#pragma once
#include <opencv2/opencv.hpp>
#include "View.h"
#include "Model.h"

class Controller
{

private:

	View var1;
	Model model;

public:
	Controller();
	void presentation();

};

