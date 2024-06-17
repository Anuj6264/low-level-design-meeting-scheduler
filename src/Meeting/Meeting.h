#ifndef MEETING_H
#define MEETING_H

#include "../Room/Room.h"

class Room;

class Meeting {
public:
    Meeting(int start, int end, Room* room);
    int getEnd() const;
    int getStart() const;

private:
    int start, end;
    Room* room;
};

#endif
