#ifndef ASLAM_CV_COMMON_CHANNEL_DEFINITIONS_H_
#define ASLAM_CV_COMMON_CHANNEL_DEFINITIONS_H_

#include <aslam/common/channel-declaration.h>

#define VISUAL_KEYPOINTS_CHANNEL "VISUAL_KEYPOINTS"
#define VISUAL_DESCRIPTORS_CHANNEL "VISUAL_DESCRIPTORS"

DECLARE_CHANNEL(VISUAL_KEYPOINT_MEASUREMENTS, Eigen::Matrix2Xd);
DECLARE_CHANNEL(VISUAL_KEYPOINT_MEASUREMENT_UNCERTAINTIES, Eigen::VectorXd);
DECLARE_CHANNEL(VISUAL_KEYPOINT_ORIENTATIONS, Eigen::VectorXd);
DECLARE_CHANNEL(VISUAL_KEYPOINT_SCALES, Eigen::VectorXd);
DECLARE_CHANNEL(BRISK_DESCRIPTORS, Eigen::Matrix<char, Eigen::Dynamic, Eigen::Dynamic>);

#endif  // ASLAM_CV_COMMON_CHANNEL_DEFINITIONS_H_
