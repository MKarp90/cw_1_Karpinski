#include <iostream>
using namespace std;

#include <opencv2/core/core.hpp> //dołącza moduł core
#include <opencv2/highgui/highgui.hpp> //dołącza moduł highgui
#include <opencv2/imgproc/imgproc.hpp> //dołącza moduł highgui
using namespace cv;

Mat image,image2;
int value;

void wygladzenie(int,void*)
{
  image=imread("C:\\Users\\Laboratorium\\Pictures\\lena.jpg"); //wczytuje obraz
  blur(image, image2, Size (2,value));
  imshow("Lena",image2);//wyświetla obraz
}

int main()
{

 Mat A=Mat::eye(5,5,CV_64FC1);//tworzy macierz jednostkową
 cout<<A*5.5<<endl;//wyświetla macierz pomnożoną przez 5.5

 image=imread("C:\\Users\\Laboratorium\\Pictures\\lena.jpg"); //wczytuje obraz
 imshow("Lena",image);//wyświetla obraz
 value=0;
 createTrackbar("suwak", "Lena", &value ,10,wygladzenie);
 waitKey();

//Mat B=Mat::ones(3,3,CV_64FC1);
// waitKey();
// erode(image, image2,B,Point (-1, -1),1 );
// imshow("Lena2",image2);//wyświetla obraz
// imwrite("C:\\Users\\Laboratorium\\Pictures\\lena_eroded.jpg",image2);


// waitKey();//wstrzymuje działanie programu

 return 0;
}
