#ifndef _INTEL_H_
#define _INTEL_H_

#include "commons/commons.h"
#include "robot.h"


class Intel{
private:
	int counter;
    float timestamp;
    char referee_state;
    float referee_time_left;
    int score_player, score_opponent;
    int goalie_id_player, goalie_id_opponent;
    int robot_count_player, robot_count_opponent;

	SSL_Geometry geometry;
	vector<Robot> robots;
	Pose ball, vball;

	bool checkVersionIO();
public:
	Intel();
    SSL_Geometry getGeometry() const { return geometry; }	
	void init();
    void loop();
	void receive_new_state();
    void send_new_command();
    void calc_intel();
};

#endif // _INTEL_H_