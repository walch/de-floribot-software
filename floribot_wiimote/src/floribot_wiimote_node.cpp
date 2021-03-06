/*
 * File: floribot_wiimote_node.cpp
 * node floribot_wiimote
 *
 * @author: floribot_acceleo
 */

#include "Floribot_wiimote.h"

using namespace floribot_wiimote;

int main(int argc, char **argv) 
{
	ros::init(argc, argv, "floribot_wiimote_node");
	ros::NodeHandle nh;
	Floribot_wiimote node(nh);

	ros::Rate r(node.get_tick_rate());
	while (ros::ok())
	{
		ros::spinOnce();
		node.tick();
		r.sleep();
	}
	return 0;
}

