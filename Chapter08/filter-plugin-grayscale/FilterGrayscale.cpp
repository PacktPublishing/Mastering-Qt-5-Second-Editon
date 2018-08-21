#include "FilterGrayscale.h"

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

FilterGrayscale::FilterGrayscale(QObject* parent) :
    QObject(parent)
{
}

FilterGrayscale::~FilterGrayscale()
{
}

QString FilterGrayscale::name() const
{
    return "Grayscale";
}

QImage FilterGrayscale::process(const QImage& image)
{
    // QImage => cv::mat
    cv::Mat tmp(image.height(),
                image.width(),
                CV_8UC4,
                (uchar*)image.bits(),
                image.bytesPerLine());

    cv::Mat resultMat;
    cv::cvtColor(tmp, resultMat, CV_BGR2GRAY);

    // cv::mat => QImage
    QImage resultImage((const uchar *) resultMat.data,
                       resultMat.cols,
                       resultMat.rows,
                       resultMat.step,
                       QImage::Format_Grayscale8);
    return resultImage.copy();
}

