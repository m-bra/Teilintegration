#ifndef FILE_IO_H
#define FILE_IO_H

#include "datatypes.h"
#include <map>

using namespace std;

map<period, course> load_timetable(string filename);
map<student, course> load_students(string filename);
void save_students(string filename, map<student, course>);

#endif // FILE_IO_H
