#ifndef FILE_IO_H
#define FILE_IO_H

#include <datatypes.h>
#include <map>
#include <vector>

using namespace std;

Timetable load_timetable(string filename);
map<Course, vector<Student>> load_students(string filename);

void save_students(string filename, map<Course, vector<Student>> students);

void readTimetableLine(string line, Period& period, Course& course);
void readStudentLine(string line, Course& course, Student& student);

#endif // FILE_IO_H
