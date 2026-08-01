#include "rclcpp/rclcpp.hpp"

class DroneNode : public rclcpp::Node
{
public:
    DroneNode()
        : Node("drone_node")
    {
        RCLCPP_INFO(this->get_logger(), "Autonomous Drone Node Started!");
    }
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<DroneNode>();

    rclcpp::spin(node);

    rclcpp::shutdown();

    return 0;
}