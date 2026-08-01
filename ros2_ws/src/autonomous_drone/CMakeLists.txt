cmake_minimum_required(VERSION 3.8)

project(autonomous_drone)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(drone_node
  src/drone_node.cpp
)

target_link_libraries(drone_node
  rclcpp::rclcpp
)

install(TARGETS
  drone_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()