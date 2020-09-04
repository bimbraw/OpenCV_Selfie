// opencvTry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    std::cout << "Hello World!\n";
    //just testing
    
    Mat img = imread("C:/Users/Keshav Bimbraw/source/repos/opencvTry/selfie.jpg");
    //have to include the whole path
    //c++ has a problem with backslash in path names. Wow. 
    
    if (img.empty())
        std::cout << "failed to open img.jpg" << std::endl;
    else
        std::cout << "img.jpg loaded OK" << std::endl;
    
    namedWindow("image", WINDOW_AUTOSIZE);
    imshow("image", img);
    waitKey(0);
    
    return 0;
}