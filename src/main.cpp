#include <iostream>
#include "Scheduler/Scheduler.h"
#include "Room/Room.h"
#include "Meeting/Meeting.h"

int main() {
    Room room1("Atlas");
    Room room2("Nexus");
    Room room3("HolyCow");

    vector<Room> roomVec = {room1, room2, room3};
    Scheduler scheduler(roomVec);

    cout << scheduler.book(15, 2, 5) << endl; // Atlas
    cout << scheduler.book(15, 5, 8) << endl; // Atlas
    cout << scheduler.book(15, 4, 8) << endl; // Nexus
    cout << scheduler.book(15, 3, 6) << endl; // HolyCow
    cout << scheduler.book(15, 7, 8) << endl; // HolyCow
    cout << scheduler.book(15, 6, 9) << endl; // No rooms available
    cout << scheduler.book(16, 6, 9) << endl; // Atlas

    return 0;
}

