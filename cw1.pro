TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

LIBS += -L"C:/opencv_qt/lib/"
CONFIG(debug, debug|release){
 LIBS += -lopencv_highgui246d -lopencv_core246d -lopencv_imgproc246d -lopencv_calib3d246d -lopencv_features2d246d -lopencv_nonfree246}
 else {
 LIBS += -lopencv_highgui246 -lopencv_core246 -lopencv_imgproc246 -lopencv_calib3d246 -lopencv_features2d246 -lopencv_nonfree246}
INCLUDEPATH +=C:/opencv/build/include
