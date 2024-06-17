#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include "../Meeting/Meeting.h"
using namespace std;

class Meeting;
typedef unordered_map<int, vector<Meeting>> Calendar;

class Room {
public:
    Room();
    Room(string name);
    bool book(int day, int start, int end);
    const string& getName() const;

private:
    string name;
    Calendar calendar;
};

#endif
