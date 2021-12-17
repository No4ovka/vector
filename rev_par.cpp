#include "easy_list.h"

void itc_rev_par_list(vector <int> &mass){
    int chis;
    if (mass.size() > 0){
        for (int k = 1 ; k < mass.size(); k += 2){
            chis = mass[k];
            mass[k] = mass[k - 1];
            mass[k - 1] = chis;
        }
    }
}
