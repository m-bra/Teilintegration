#include <iostream>
#include <string>

struct course{
    string Teacher;
    string Room;
    string Subject;
}
struct student{
    string Name;
}
struct timetableEntry{
    int Time;
    string Day;
    course course;
}
struct studentAssignment{
    student student;
    course course;
}
