#include "Scheduler.h"

Scheduler::Scheduler(vector<Room> rooms) {
    this -> rooms = rooms;
}

string Scheduler::book(int day, int start, int end) {
    for (Room& room : rooms) {
        if (room.book(day, start, end)) {
            return room.getName();
        }
    }
    return "No rooms available";
}
