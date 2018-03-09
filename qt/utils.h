#ifndef UTILS
#define UTILS

#include <vector>
#include <string>

using namespace std;

inline vector<string> split(string text) {
    vector<string> lines;
    int pos = 0;
    while ((pos = text.find("\n")) != string::npos)
    {
        lines.push_back(text.substr(0, pos));
        text.erase(0, pos + 1);
    }

    return lines;
}

#endif // UTILS

