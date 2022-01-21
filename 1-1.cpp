#include<iostream>
#include<opencv2/opencv.hpp>
#include<vector>
using namespace std;
using namespace cv;
int main(){
    Mat src=imread("/home/dqs/桌面/第一部分/1.jpeg");
    int rows=src.rows;
    int cols=src.cols;
    Vec3b p;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            p[0]=(src.at<Vec3b>(i,j)[0]+src.at<Vec3b>(i,j)[1]+src.at<Vec3b>(i,j)[2])/3;
            src.at<Vec3b>(i,j)[0]=p[0];
            src.at<Vec3b>(i,j)[1]=p[0];
            src.at<Vec3b>(i,j)[2]=p[0];
        }
    }
    imshow("1.1",src);
    waitKey(0);
    return 0;
}
