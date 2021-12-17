#include "easy_list.h"

void itc_even_index_list (const vector <int> &mass, vector <int> &mass2){
    if (mass.size() > 0){
        for (int k = 0; k < mass.size(); k += 2)
            mass2.push_back(mass[k]);
    }
}
