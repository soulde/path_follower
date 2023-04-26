//
// Created by soulde on 2023/3/7.
//
#include "PathFollower.h"
int main(int argc, char **argv) {
    ros::init(argc, argv,"path_follower");
    ros::NodeHandle nh;
    PathFollower follower(nh);
    while (ros::ok()){
        ros::spinOnce();
    }
}