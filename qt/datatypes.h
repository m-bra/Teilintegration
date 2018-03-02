#include <iostream>
#include <string>

using namespace std;

struct course {
    string teacher;
    string room;
    string subject;
};

struct student {
    string name;
};

struct period {
    /// day: 1-5 (monday-friday)
    /// hour: 1-8 (schulstunde)
    int day, hour;
};

struct student_wish {
    student student;
    vector<string> subjects;
    vector<period> periods;
};

struct student_association {
    student student;
    course course;
    period period;
};

vector<student_association> associate(vector<student_wish> wishes, map<period, vector<course>> timetable);
