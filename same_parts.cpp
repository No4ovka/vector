#include "easy_list.h"

bool itc_same_parts_list(const vector <int> &mass)
{
    if (mass.size() > 0){
    for (int k = 1; k < mass.size(); k++)
        if ((mass[k] < 0 && mass[k - 1] < 0) || (mass[k] >= 0 && mass[k - 1] >= 0))
            return true;
    }
    return false;
}
