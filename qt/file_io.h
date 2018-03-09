#ifndef FILE_IO_H
#define FILE_IO_H

#include <datatypes.h>
#include <map>
#include <vector>

using namespace std;

map<period, vector<course>> load_timetable(string filename);
map<student, course> load_students(string filename);
void save_students(string filename, map<student, course>);

void readLine(string line, period& period, course& course);

#endif // FILE_IO_H
