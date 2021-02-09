#include "sift.h"

#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>


void phg::SIFT::detectAndCompute(const cv::Mat &originalImg, std::vector<cv::KeyPoint> &kps, cv::Mat &desc) {
    // TODO
}

void phg::SIFT::buildPyramids(const cv::Mat &imgOrg, std::vector<cv::Mat> &gaussianPyramid, std::vector<cv::Mat> &DoGPyramid) {
    // TODO
}

void phg::SIFT::findLocalExtremasAndDescribe(const std::vector<cv::Mat> &gaussianPyramid, const std::vector<cv::Mat> &DoGPyramid, std::vector<cv::KeyPoint> &keyPoints, cv::Mat &desc) {
    // TODO
}

bool phg::SIFT::buildLocalOrientationHists(const cv::Mat &img, size_t i, size_t j, size_t radius, std::vector<float> &votes, float &biggestVote) {
    // TODO
    return false;
}

bool phg::SIFT::buildDescriptor(const cv::Mat &img, float px, float py, double descrSampleRadius, float angle, std::vector<float> &descriptor) {
    // TODO
    return false;
}
