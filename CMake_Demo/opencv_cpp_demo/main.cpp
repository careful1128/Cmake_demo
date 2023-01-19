#include "opencv2/opencv.hpp"

using namespace cv;

int main(int argc, char const *argv[])
{
   Mat src;
   std::string pic = argv[1];
   src = imread(pic);
   imshow("img_text",src);
   std::cout << src << std::endl;
   waitKey(5000);
   return 0;
}

