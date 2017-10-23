#pragma once
#include <opencv/opencv.hpp>

namespace lbf {
	class FeatureLocation {
	public:
		cv::Point2d a;
		cv::Point2d b;
		FeatureLocation(cv::Point2d _a, cv::Point2d _b){
			a = _a;
			b = _b;
		}
	};
}