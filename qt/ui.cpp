#include <fstream>
#include <string>
using namespace std;

int readlehrer() {
    fstream f;
    string lehrername;
    string lehrerkuerzel;
    string lehrerstring;

    f.open("lehrerliste.txt", ios::in);
    while (!f.eof())
        {
            f.getline(cstring, sizeof(cstring));
            lehrerstring << cstring << endl;
        }
}

int addlehrer() {

}
