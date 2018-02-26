#include <iostream>
#include <string>

struct course {
    string teacher;
    string room;
    string subject;
};

struct student {
    string name;
};

struct timetable_entry {
    int time;
    string day;
    course course;
};

struct student_assignment {
    student student;
    course course;
};
