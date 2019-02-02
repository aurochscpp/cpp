
#include "cv.h"
#include "highgui.h"

int main(int argc, char** argv) {
    cvNamedWindow("win");
    CvCapture* capture = cvCreateCameraCapture(0);    //创建并获取摄像设备
    IplImage* frame;
    while(1) {
        frame = cvQueryFrame(capture);    //创建并获取一张摄像截图
        if(!frame) break;        //如果失败终止循环
        cvShowImage("win", frame);    //在一个"win"窗口,并当中显示该截图
        char c = cvWaitKey(50);
        if(c==27) break;
    }
    cvReleaseCapture(&capture);        //释放摄像设备
    cvDestroyWindow("win");        //释放窗口"win"
    return 0;
}
