#include "easy_list.h"

void itc_rev_list(vector <int> &mass){
    int chis;
    if (mass.size() > 0){
        for (int k = 0 ; k <= (mass.size() / 2); k++){
            chis = mass[k];
            mass[k] = mass[(mass.size() - 1) - k];
            mass[(mass.size() - 1) - k] = chis;
        }
    }
}
