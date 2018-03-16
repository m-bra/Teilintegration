#include <fstream>
#include <string>
using namespace std;

int readlehrer() {
    fstream f;
    string lehrerstring;

    f.open("lehrerliste.txt", ios::in);
    while (!f.eof())
        {
            f.getline(cstring, sizeof(cstring));
            lehrerstring << cstring << endl;
        }
    f.close;
}

int addlehrer() {
    fstream f;
    f.open("lehrerliste.txt", ios::out);

    f.close;
}



//  http://www.willemer.de/informatik/cpp/fileop.htm
//  eksdeee
