#ifndef _612_H
#define _612_H

#include <networktables/NetworkTable.h>
#include "state.h"

extern NetworkTable* main_table;
extern State global_state;

enum teleop_state {
    DRIVE, CLIMB, SHOOT_AUTO
};

static const double M_PI=3.14159256359;

#endif // _612_H
