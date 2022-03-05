#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgcodecs.hpp"

using namespace cv;
using namespace std;



int main(int argc, char **argv)
{

    string location = "c:\\Users\\Asus\\Desktop\\image.jpg" ;

    Mat im = imread(location ,1 );
    if (im.empty())
    {
        cout << "Cannot open image!" << endl;
        return -1;
    }

    std::cout << im.size;

    return 0;
}
