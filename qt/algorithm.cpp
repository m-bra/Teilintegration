
#include "algorithm.h"
#include <iostream>

void test() {

    //student wishes
    student_wish sw1;
    sw1.student.name = "Abdul, Mohammed";
    sw1.periods.push_back({1,1});
    sw1.periods.push_back({1,2});
    sw1.periods.push_back({2,5});
    sw1.periods.push_back({2,6});
    sw1.periods.push_back({4,3});
    sw1.periods.push_back({4,4});
    sw1.subjects.push_back("d");
    sw1.subjects.push_back("m");
    sw1.subjects.push_back("mu");

    student_wish sw2;
    sw2.student.name = "Martens, Philip";
    sw2.periods.push_back({1,1});
    sw2.periods.push_back({1,2});
    sw2.periods.push_back({2,5});
    sw2.periods.push_back({2,6});
    sw2.periods.push_back({4,3});
    sw2.periods.push_back({4,4});
    sw2.subjects.push_back("e");
    sw2.subjects.push_back("m");
    sw2.subjects.push_back("dsp");

    //courses
    course mfl;
    mfl.teacher = "Fleischhauer, Matthias";
    mfl.subject = "m";
    mfl.room = "HaG2";

    course muan;
    muan.teacher = "Andersen, Bettina";
    muan.subject = "mu";
    muan.room = "M1";

    course dew;
    dew.teacher = "Ellwitz, Andrea";
    dew.subject = "d";
    dew.room = "1.33.7";

    course dsptp;
    dsptp.teacher = "Torp, Anke";
    dsptp.subject = "dsp";
    dsptp.room = "12A";

    course ekl;
    ekl.teacher = "Kleefeldt, Doreen";
    mfl.subject = "e";
    mfl.room = "Mst42";


    //given timetables
    map<period, vector<course>> tt;

 #define E(x, y) tt.insert(make_pair(period x, vector<course> y))

    E(({1, 1}), ({mfl, muan, dew}));
    E(({1, 2}), ({mfl, muan, dew}));
    E(({1, 3}), ({muan}));
    E(({1, 4}), ({muan}));

    associate({sw1,sw2}, tt);
}

std::ostream &operator<<(std::ostream &os, period const &period)
{
    os << "{" << period.day << ", " << period.hour << "}";
    return os;
}

std::ostream &operator<<(std::ostream &os, course const &course)
{
    os << "{" << course.room << ", " << course.subject << ", " << course.teacher <<"}";
    return os;
}

std::ostream &operator<<(std::ostream &os, pair<period, vector<course>> const &pair)
{
    os << "{ period: " << pair.first << ", courses: ";

    for (course course : pair.second)
        os << course << ", ";

    os << "}";
    return os;
}


vector<student_association> associate(vector<student_wish> wishes, map<period, vector<course>> timetable) {
    int x;
    auto xy = timetable.find({1,1});
    pair<period, vector<course>> p = *xy;

    cout << p;
    cin >> x;
}


