#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;
RNG g_rng(12345);
int main()
{
    Mat srcImage = imread ( "1.png",0);
    imshow("1",srcImage);
    Mat desImage;
    cornerHarris(srcImage,desImage, 2, 3, 0.01);
    Mat dd;
    threshold(desImage,dd,0.00001,255,THRESH_BINARY);
    imshow("2",dd);

    vector<Point2f> corners;
    Mat copy=srcImage.clone();
    goodFeaturesToTrack(srcImage,corners,93,0.01,10,Mat(),3,false,0.04);
    for(unsigned int i=0;i<corners.size();i++)
    {
        circle(copy,corners[i],8,Scalar(g_rng.uniform(0,255),g_rng.uniform(0,255),g_rng.uniform(0,255)),-1,8,0);
    }
    for( int i = 0; i < corners.size(); i++ )
    { cout<<" \t>>精确角点坐标["<<i<<"]  ("<<corners[i].x<<","<<corners[i].y<<")"<<endl; }
    imshow("3",copy);

    Size winSize = Size( 5, 5 );
        Size zeroZone = Size( -1, -1 );
        TermCriteria criteria = TermCriteria( CV_TERMCRIT_EPS + CV_TERMCRIT_ITER, 40, 0.001 );

        //【8】计算出亚像素角点位置
        cornerSubPix( srcImage, corners, winSize, zeroZone, criteria );

        //【9】输出角点信息
        for( int i = 0; i < corners.size(); i++ )
        { cout<<" \t>>精确角点坐标["<<i<<"]  ("<<corners[i].x<<","<<corners[i].y<<")"<<endl; }

    waitKey(0);
    cout << "Hello World!" << endl;
    return 0;
}
