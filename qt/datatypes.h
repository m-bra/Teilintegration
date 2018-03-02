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

typedef timetable_entry tt_entry;

struct student_wish {
    student student;
    vector<course> course;
    vector<period> period;
};

struct student_association {
    student student;
    course course;
    period period;
};
