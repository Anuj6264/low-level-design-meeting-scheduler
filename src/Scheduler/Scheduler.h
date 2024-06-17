#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include "../Room/Room.h"

class Scheduler {
public:
    Scheduler(vector<Room> rooms);
    string book(int day, int start, int end);

private:
    vector<Room> rooms;
};

#endif
