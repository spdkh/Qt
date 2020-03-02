#include "mainwindow.h"
#include <QApplication>
#include "opencv2/opencv.hpp"
#include <iostream>


using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    VideoCapture cap(0);
      if(!cap.isOpened()){
             cout << "Error opening video stream or file" << endl;
             return 0;
      }

   int frame_width=   cap.get(CV_CAP_PROP_FRAME_WIDTH);
   int frame_height=  cap.get(CV_CAP_PROP_FRAME_HEIGHT);
   VideoWriter video("out.avi",CV_FOURCC('M','J','P','G'),10, Size(frame_width,frame_height),true);

   for(;;){

       Mat frame;
       cap >> frame;
       video.write(frame);
       imshow( "Frame", frame );
       char c = (char)waitKey(33);
       if( c == 27 ) break;
    }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
