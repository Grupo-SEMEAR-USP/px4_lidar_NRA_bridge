#include "../../include/PX4_lidar_bridge/PX4_lidar_bridge.h"

using namespace bridge;

int main(int argc, char** argv) {
  ros::init(argc, argv, "PX4_lidar_bridge_node");
  ros::NodeHandle nh("~");
  PX4_Lidar_Bridge Bridge(nh);

  ros::spin();

  Bridge.worker_.join();

  return 0;
}
