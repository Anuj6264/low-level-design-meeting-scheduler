#include "Meeting.h"
#include "../Room/Room.h"

Meeting::Meeting(int start, int end, Room* room) {
    this -> start = start;
    this -> end = end;
    this -> room = room;
}

int Meeting::getEnd() const {
    return end;
}

int Meeting::getStart() const {
    return start;
}
