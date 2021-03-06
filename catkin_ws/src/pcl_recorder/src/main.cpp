/*
 * Copyright (c) 2019 Intel Labs.
 *
 * authors: Frederik Pasch (frederik.pasch@intel.com)
 */

#include <ros/ros.h>
#include "PclRecorder.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "pcl_recorder");
  PclRecorder pclRecorder;
  ros::spin();
};
