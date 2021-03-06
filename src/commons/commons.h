#ifndef _COMMONS_H_
#define _COMMONS_H_

#define IVERSION	0.0.0

#include "math.h"

#include "pose.h"
#include "path.h"
#include "command.h"
#include "ssl_geometry.h"
#include "../control/ompl.h"
#include "../control/boost.h"

namespace common{
	float radians(Pose a, Pose b);
	float degrees(Pose a, Pose b);
	float distance(Pose a, Pose b);
	Path PathPtr2Path(ob::PathPtr);
	Pose grSim2OMPL(Pose);
	Pose OMPL2grSim(Pose);
}

#endif // _COMMONS_H_