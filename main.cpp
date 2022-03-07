#include <iostream>

#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/core.hpp>


using namespace cv;
using namespace std;

int main(int argc, char **argv)
{

    string location = "Lenna.png" ;

    Mat im = imread(location ,1 );
    if (im.empty())
    {
        cout << "Cannot open image!" << endl;
        return -1;
    }

    cout << im.size;
    imshow("img",im);

    waitKey(0);

    return 0;
}
