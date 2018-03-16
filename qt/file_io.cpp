#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>


#include <file_io.h>
#include <datatypes.h>
#include <utils.h>


using namespace std;

map<period, vector<course>> load_timetable(string filename) {
    map<period, vector<course>> timetable;

    ifstream t(filename.c_str());
    string s((istreambuf_iterator<char>(t)),istreambuf_iterator<char>());

    vector<string> lines = split(s);

    for (int i = 0; i < lines.size(); i++) {
        period curPeriod;
        course curCourse;

        readLine(lines[i], curPeriod, curCourse);

        if (timetable.count(curPeriod) > 0) {
            timetable[curPeriod].push_back(curCourse);
        } else {
            vector<course> tempCourses;
            tempCourses.push_back(curCourse);
            timetable.insert(make_pair(curPeriod, tempCourses));
        }
    }

    return timetable;
}

void readLine(string line, period& period, course& course) {
    vector<string> content = split(line, ',');

    period.day = stoi(content[0]);

    period.hour = stoi(content[1]);

    course.teacher = content[2];

    course.room = content[3];

    course.subject = content[4];
}

// day1,hour1,teacher1,room1,subject1
// day2,hour2,teacher2,room2,subject2

//struct course {
//    string teacher;
//    string room;
//    string subject;
//};
