#ifndef DATATYPES_H
#define DATATYPES_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct Course {
    string teacher;
    string subject;
    string room;
};

struct Student {
    string name;
};

struct Period {
    // day: 1-5 (monday-friday)
    // hour: 1-8 (schulstunde)
    int day, hour;
};

typedef map<Period, vector<Course>> Timetable;

namespace std {
    template <>
    struct less<Period> { // true if x < y
      bool operator() (const Period& x, const Period& y) const {
          if (x.day < y.day)
              return true;
          else if (x.day > y.day)
              return false;
          else {
              if (x.hour < y.hour)
                  return true;
              else
                  return false;
          }
      }
    };

    template <>
    struct less<Course> { // true if x < y; teacher > subject > room
      bool operator() (const Course& x, const Course& y) const {
          if (x.teacher < y.teacher)
              return true;
          else if (x.teacher > y.teacher)
              return false;
          else {
              if (x.subject < y.subject)
                  return true;
              else if (x.subject > y.subject)
                  return false;
              else {
                  if (x.room < y.room)
                      return true;
                  else if (x.room > y.room)
                      return false;
                  else {
                    return false;  // falls alles gleich ist, keine ficks sind gegeben
                  }
              }
          }
      }
    };
}

struct Student_Wish {
    Student student;
    vector<string> subjects;
    vector<Period> periods;
};

struct Student_Association {
    Student student;
    Course course;
    Period period;
};

vector<Student_Association> associate(vector<Student_Wish> wishes, Timetable timetable);

#endif
