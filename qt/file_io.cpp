#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>


#include <file_io.h>
#include <datatypes.h>
#include <utils.h>


using namespace std;

Timetable load_timetable(string filename) {
    Timetable timetable;

    ifstream t(filename.c_str());
    string s((istreambuf_iterator<char>(t)),istreambuf_iterator<char>());

    vector<string> lines = split(s);

    for (int i = 0; i < lines.size(); i++) {
        Period curPeriod;
        Course curCourse;

        readTimetableLine(lines[i], curPeriod, curCourse);

        if (timetable.count(curPeriod) > 0) {
            timetable[curPeriod].push_back(curCourse);
        } else {
            vector<Course> tempCourses;
            tempCourses.push_back(curCourse);
            timetable.insert(make_pair(curPeriod, tempCourses));
        }
    }

    return timetable;
}

map<Course, vector<Student>> load_students(string filename) {
    map<Course, vector<Student>> students;

    ifstream t(filename.c_str());
    string s((istreambuf_iterator<char>(t)),istreambuf_iterator<char>());

    vector<string> lines = split(s);

    for (int i = 0; i < lines.size(); i++) {
        Course curCourse;
        Student curStudent;

        readStudentLine(lines[i], curCourse, curStudent);

        if (students.count(curCourse) > 0) {
            students[curCourse].push_back(curStudent);
        } else {
            vector<Student> tempStudents;
            tempStudents.push_back(curStudent);
            students.insert(make_pair(curCourse, tempStudents));
        }
    }

    return students;
}


void readTimetableLine(string line, Period& period, Course& course) {  // day1,hour1,teacher1,room1,subject1
    vector<string> content = split(line, ',');                         // day2,hour2,teacher2,room2,subject2

    period.day = stoi(content[0]);
    period.hour = stoi(content[1]);
    course.teacher = content[2];
    course.room = content[3];
    course.subject = content[4];
}

void readStudentLine(string line, Course& course, Student& student) {  // teacher1, room1, subject1, student1
    vector<string> content = split(line, ',');                         // teacher1, room1, subject1, student2
                                                                       // teacher2, room2, subject2, student1
    course.teacher = content[0];
    course.room = content[1];
    course.subject = content[2];
    student.name = content[3];
}
