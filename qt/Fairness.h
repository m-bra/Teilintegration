#ifndef FARINESS
#define FAIRNESS

#include <vector>
#include <string>

inline int calcFairness(bool first, bool second, bool third) {
    int fscore = 0;

    if (first)
        fscore = fscore + 6;
    else
        fscore--;

    if (second)
        fscore = fscore + 4;
    else
        fscore--;

    if (third)
        fscore = fscore + 2;
    else
        fscore--;

    return fscore;
}

#endif // FAIRNESS
