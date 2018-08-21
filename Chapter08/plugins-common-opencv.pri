windows {
    INCLUDEPATH += $$(OPENCV_HOME)/../../include
    LIBS += -L$$(OPENCV_HOME)/lib \
        -lopencv_core320 \
        -lopencv_imgproc320
}

linux {
    CONFIG += link_pkgconfig
    PKGCONFIG += opencv
}

macx {
    INCLUDEPATH += /usr/local/Cellar/opencv/3.2.0/include/

    LIBS += -L/usr/local/lib \
        -lopencv_core \
        -lopencv_imgproc
}

