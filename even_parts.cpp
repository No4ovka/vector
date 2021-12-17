#include "easy_list.h"

void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2)
{
    if (mass.size() > 0){
            for (int k = 0; k < mass.size(); k++)
                if (mass[k] % 2 == 0)
                    mass2.push_back(mass[k]);
        }
}
