// Add this to get the KUKAVARPROXY movement commands
#include "KUKAVARPROXY_movement.h"
#include <stdio.h>

int main(){
	std::cout << "Hello world\n";
	// Initialize the robot
	Robot robot("192.168.250.120");
	
	// Get the current position
	RobotPose pose = robot.CurrentPosition();

	std::cout << "Current " << pose.toString() << "\n";
	
	// MOVE IN A SQUARE	
	
	// Move the pose relatively 200mm in negative z direction
	pose.z -= 200;
	
	// Issue the command to the robot
	robot.GoToPosition(pose);

	std::cout << "Going to " << pose.toString() << "\n";

	// Wait until the position has been reached
	while(!robot.PositionReached(pose));

	std::cout << "Reached position\n";

	// Move 200mm in the positive x direction
	pose.x += 200;

	// Issue the command to the robot
	robot.GoToPosition(pose);

	std::cout << "Going to " << pose.toString() << "\n";
	
	// Wait until the position has been reached
	while(!robot.PositionReached(pose));

	std::cout << "Reached position\n";
	
	// Move the pose relatively 200mm in negative z direction
	pose.z += 200;
	
	// Issue the command to the robot
	robot.GoToPosition(pose);

	std::cout << "Going to " << pose.toString() << "\n";

	// Wait until the position has been reached
	while(!robot.PositionReached(pose));

	std::cout << "Reached position\n";

	// Move 200mm in the positive x direction
	pose.x -= 200;

	// Issue the command to the robot
	robot.GoToPosition(pose);

	std::cout << "Going to " << pose.toString() << "\n";
	
	// Wait until the position has been reached
	while(!robot.PositionReached(pose));

	std::cout << "Reached position\n";

	// END MOVING IN A SQUARE

	// MOVE TO A SPECIFIC LOCATION

	RobotPose new_pose{1605.79, -94.51, 1015.05, 70.35, -1.22, -90.38};
	robot.GoToPosition(new_pose);

	std::cout << "Going to " << new_pose.toString() << "\n";

	// Wait until the position has been reached
	while(!robot.PositionReached(new_pose));

	std::cout << "Reached position\n";

	// END MOVE TO A SPECIFIC LOCATION

	// Disconnect
	robot.Disconnect();
	std::cout << "Test successful\n"; 
	return 0;
}
