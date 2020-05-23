#include "Model.h"
#include <iostream>

using namespace cv;
using namespace std;

Model::Model()

{

}



void Model::median()
{
	//Création de l’objet imageet lecture de l’image à partir du répertoire associé en utilisant la méthode imread()
	Mat image = imread("lenaa.jpg");
	//Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get();

	}

	Mat image_median;
	medianBlur(image, image_median, 17);
	String window_name_filter = "filtre median";

	namedWindow(window_name_filter);
	//Affiche l'image original
	imshow("Original", image);
	//Affiche l'image avec le filtre
	imshow(window_name_filter, image_median);

	waitKey(0);
	destroyAllWindows();

}
void Model::gaus()
{
	//Création de l’objet imageet lecture de l’image à partir du répertoire associé en utilisant la méthode imread()
	Mat image = imread("lenaa.jpg");
	//Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get();

	}

	Mat image_blurred;
	GaussianBlur(image, image_blurred, Size(5, 5), 0);
	String window_name_blurred = "filtre gaussian";
	namedWindow(window_name_blurred);

	//Affiche l'image original
	imshow("Original", image);
	//Affiche l'image avec le filtre
	imshow(window_name_blurred, image_blurred);

	waitKey(0);
	destroyAllWindows();

}


void Model::sobel()
{
	//Création de l’objet imageet lecture de l’image à partir du répertoire associé en utilisant la méthode imread()
	Mat image = imread("lenaa.jpg");
	//Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get();

	}

	Mat im;

	Sobel(image, im, -1, 1, 1);


	String imim = "filtre sobel";

	namedWindow(imim);

	//Affiche l'image original
	imshow("Original", image);
	//Affiche l'image avec le filtre
	imshow(imim, im);

	waitKey(0);
	destroyAllWindows();

}

/*void Model::dilate()
{
	//Création de l’objet imageet lecture de l’image à partir du répertoire associé en utilisant la méthode imread()
	Mat image = imread("lenaa.jpg");
	//Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get();

	}

	Mat tes;

	dilate(image, tes, Mat());


	String tt = "filtre dilatation ";

	namedWindow(tt);

	//Affiche l'image original
	imshow("Original", image);
	//Affiche l'image avec le filtre
	imshow(tt, tes);

	waitKey(0);
	destroyAllWindows();

}*/

void Model::erosion()
{
	//Création de l’objet imageet lecture de l’image à partir du répertoire associé en utilisant la méthode imread()
	Mat image = imread("lenaa.jpg");
	//Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get();

	}
	Mat tes;
	erode(image, tes, Mat());


	String tt = "filtre erosion";

	namedWindow(tt);

	//Affiche l'image original
	imshow("Original", image);
	//Affiche l'image avec le filtre
	imshow(tt, tes);

	waitKey(0);
	destroyAllWindows();


}

void Model::canny()
{
	//Création de l’objet imageet lecture de l’image à partir du répertoire associé en utilisant la méthode imread()
	Mat image = imread("lenaa.jpg");
	//Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get();

	}

	Mat tes;
	Canny(image, tes, 100, 3, 3);


	String tt = "Filtre canny";

	namedWindow(tt);

	//Affiche l'image original
	imshow("Original", image);
	//Affiche l'image avec le filtre
	imshow(tt, tes);

	waitKey(0);
	destroyAllWindows();

}

void Model::seuillage()
{
	//Création de l’objet imageet lecture de l’image à partir du répertoire associé en utilisant la méthode imread()
	Mat image = imread("lenaa.jpg");
	//Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get();

	}
	Mat tes;
	Mat tes2;
	cvtColor(image, tes, COLOR_RGB2GRAY);
	threshold(tes, tes2, 150, 255, 1);


	String tt = "Operation de suillage";

	namedWindow(tt);

	//Affiche l'image original
	imshow("Original", image);
	//Affiche l'image avec le filtre
	imshow(tt, tes2);

	waitKey(0);
	destroyAllWindows();

}
