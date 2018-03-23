#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>

#include <utils.h>
#include <file_io.h>
#include <datatypes.h>


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


void save_students(string filename, map<Course, vector<Student>> students) {
    ofstream out(filename);
    string output = "";

    for (map<Course, vector<Student>>::iterator it = students.begin(); it != students.end(); it++) {
        for (int i = 0; i < it->second.size(); i++) {
            output += it->second[i].name + "," + it->first.teacher + "," + it->first.room + "," + it->first.subject + "\n";
        }
    }

    out << output;
    out.close();
}


void readTimetableLine(string line, Period& period, Course& course) {  // day1,hour1,teacher1,room1,subject1
    vector<string> content = split(line, ',');                         // day2,hour2,teacher2,room2,subject2

    period.day = stoi(content[0]);
    period.hour = stoi(content[1]);
    course.teacher = content[2];
    course.room = content[3];
    course.subject = content[4];
}

void readStudentLine(string line, Course& course, Student& student) {  // student1, teacher1, room1, subject1
    vector<string> content = split(line, ',');                         // student2, teacher1, room1, subject1
                                                                       // student1, teacher2, room2, subject2
    student.name = content[0];
    course.teacher = content[1];
    course.room = content[2];
    course.subject = content[3];

}
