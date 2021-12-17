#include "easy_list.h"

int itc_sl_list(const vector <int> &mass)      //proverit
{
    int i = 0;
    if (mass.size() > 0){
        for (int k = 1; k < mass.size(); k++){
            if (mass[k] > mass[k - 1])
                i++;
        }
    }
    return i;
}
