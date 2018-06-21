#ifndef VEHICLE_H
#define VEHICLE_H

#include "maneuver.h"
#include "util.h"

using namespace std;


class Vehicle {
	private:
		const unsigned int length,
			width;
		Coordinate rear_center,
			rear_left,
			rear_right,
			front_center,
			front_left,
			front_right;
		int orientation;	//angle between 0 and pi	
		void compute_secondary_coords();
		
	public:
		Coordinate get_rear_center();
		Coordinate get_rear_left();
		Coordinate get_rear_right();
		Coordinate get_front_center();
		Coordinate get_front_left();
		Coordinate get_front_right();
		unsigned int move(Map& map, Maneuver& man);
		Vehicle(unsigned int l, unsigned int w, Coordinate rc, int angle);
};

#endif

