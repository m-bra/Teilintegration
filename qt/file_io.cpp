#include <iostream>
#include <file_io.h>
#include <datatypes.h>
#include <vector>

using namespace std;
map<period, vector<course>> load_timetable(string filename)
{
        map<period, vector<course>> timetable;

        ifstream t(filename.c_str());
        string str((istreambuf_iterator<char>(t)),istreambuf_iterator<char>());
        string delimiter;
        size_t pos = 0;

        period periods
        course courses;

            while ((pos = s.find(delimiter)) != "\n") {
                period curPeriod;
                course curCourse;
                while((pos = s.find(delimiter)) != ","){
                    curPeriod.day = s.substr(0, pos);
                    s.erase(0, pos + delimiter.length());
                }

                curPeriod.hour = s.substr(0, pos);
                s.erase(0, pos + delimiter.length());

                curCourse.teacher = s.substr(0, pos);
                s.erase(0, pos + delimiter.length());

                curCourse.room = s.substr(0, pos);
                s.erase(0, pos + delimiter.length());


                curCourse.subject = s.substr(0, pos);
                s.erase(0, pos + delimiter.length());

            }
        std::cout << s << std::endl;


        return timetable;
}

int main{

}


// day1,hour1,teacher1,room1,subject1
// day2,hour2,teacher2,room2,subject2

//struct course {
//    string teacher;
//    string room;
//    string subject;
//};
