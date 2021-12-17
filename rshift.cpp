#include "easy_list.h"

void itc_rshift_list(vector <int> &mass)
{
    int chis1 = mass[mass.size() - 1], chis2;
    if  (mass.size() > 0)
        for (int k = 0; k < mass.size(); k++)
        {
            chis2 = mass[k];
            mass[k] = chis1;
            chis1 = chis2;
        }
}
void itc_lshift_list(vector <int> &mass)
{
    int chis1 = mass[0], chis2;
    if  (mass.size() > 0)
        for (int k = mass.size() - 1; k >= 0; k--)
        {
            chis2 = mass[k];
            mass[k] = chis1;
            chis1 = chis2;
        }
}
