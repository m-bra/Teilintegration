#ifndef DATATYPES_H
#define DATATYPES_H

#include <iostream>
#include <string>
#include <vector>
<<<<<<< HEAD
#include <map>
=======
>>>>>>> 6a00cd6a9db8ce0c168656772bd57bfc61bd8d83

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
<<<<<<< HEAD
namespace std {
=======

namespace std {

>>>>>>> 6a00cd6a9db8ce0c168656772bd57bfc61bd8d83
template <>
struct less<period> { // true if x < y
  bool operator() (const period& x, const period& y) const {
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
}

}

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

#endif
