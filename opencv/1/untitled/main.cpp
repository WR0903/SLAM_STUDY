#include <iostream>
#include <chrono>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
//#include <>
using namespace std;

using namespace cv;

int main()
{
    Mat image=imread("/home/wr/study/slam_study/opencv/build-untitled-Desktop_Qt_5_6_1_GCC_64bit-Debug/ubuntu.png");
    if(image.data==nullptr)
    {
        cerr<<"no"<<endl;
        return 0;
    }
    cout<<"The cols is:"<<image.cols<<";The rows is:"<<image.rows<<";The channels is:"<<image.channels()<<endl;
    imshow("image",image);
    waitKey(0);
    if(image.type()!=CV_8UC1&&image.type()!=CV_8UC3)
    {
        cout<<"please input a picture;"<<endl;
        return 0;
    }
    chrono::steady_clock::time_point t1=chrono::steady_clock::now();
    for(size_t y=0; y<image.rows; y++)
    {
        for(size_t x=0;x<image.cols; x++)
        {
            unsigned char* row_ptr=image.ptr<unsigned char>(y);
            unsigned char* data_ptr= &row_ptr[ x*image.channels() ];
        }
        for(int c=0;c!=image.channels();c++)
        {
            //unsigned char data = data_ptr[c];
        }
    }
    chrono::steady_clock::time_point t2=chrono::steady_clock::now();
    chrono::duration<double> time_used=chrono::duration_cast<chrono::duration<double>>(t2-t1);
    cout<<"the time use:"<<time_used.count()<<endl;
    Mat image_another=image;
    image_another(Rect(0,0,100,100)).setTo(0);
    imshow("image",image);
    waitKey(0);
    Mat image_clone=image.clone();
    image_clone(Rect(0,0,100,100)).setTo(255);
    imshow("1",image);
    imshow("2",image_clone);
    waitKey(0);
    cout << "Hello World!" << endl;
    return 0;
}
