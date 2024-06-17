#include "Room.h"
#include "../Meeting/Meeting.h"

Room::Room() {}
Room::Room(string name) {
    this -> name = name;
}

bool Room::book(int day, int start, int end) {
    for (const Meeting& m : calendar[day]) {
        if (m.getStart() < end && start < m.getEnd())
            return false;
    }
    Meeting meeting(start, end, this);
    calendar[day].push_back(meeting);
    return true;
}

const string& Room::getName() const {
    return name;
}
