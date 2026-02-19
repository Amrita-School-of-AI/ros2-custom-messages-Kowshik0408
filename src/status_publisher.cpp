#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
// TODO: Include the generated message header
// #include "ros2_custom_msgs/msg/robot_status.hpp"

using namespace std::chrono_literals;

/*
 * TODO: Create a Class named 'StatusPublisher' that inherits from rclcpp::Node.
 * Requirements:
 * 1. The constructor should name the node "status_publisher".
 * 2. Create a publisher to topic "/robot_status" with RobotStatus message type.
 * 3. Create a timer that triggers every 1000ms.
 * 4. In timer callback:
 *    - Set robot_name to "Explorer1"
 *    - Decrease battery_level from 100.0 by 0.5 each tick
 *    - Set is_active to true
 *    - Increment mission_count from 0
 *    - Publish and log the message
 */

class StatusPublisher : public rclcpp::Node
{
public:
    StatusPublisher()
        : Node("status_publisher"), battery_level_(100.0), mission_count_(0)
    {
        // TODO: Create publisher here

        // TODO: Create timer here
    }

private:
    // TODO: Define timer_callback function here

    rclcpp::TimerBase::SharedPtr timer_;
    // TODO: Declare publisher
    double battery_level_;
    int32_t mission_count_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<StatusPublisher>());
    rclcpp::shutdown();
    return 0;
}
