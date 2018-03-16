#ifndef UTILS
#define UTILS

#include <vector>
#include <string>

using namespace std;

inline vector<string> split(string text, char delimiter = '\n') {
    vector<string> lines;
    size_t pos = 0;
    while ((pos = text.find(delimiter)) != string::npos) {
        lines.push_back(text.substr(0, pos));
        text.erase(0, pos + 1);
    }

    if (!text.empty()) {
        lines.push_back(text);
    }

    return lines;
}

#endif // UTILS

