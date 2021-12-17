#include "easy_list.h"

int itc_positive_list(const vector <int> &mass)
{
    int i = 0;
    if (mass.size() > 0){
        for (int k = 0; k < mass.size(); k++)
            if (mass[k] >= 0)
                i++;
    }
    return i;
}
