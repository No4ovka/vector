#include "easy_list.h"

void itc_super_shift_list(vector <int> &mass, int n)
{
    if(mass.size() > 0){
        if(n >= 0){
            n = (n + mass.size()) % mass.size();
            for(int k = 0; k < n; k++){
                itc_rshift_list(mass);
            }
        }
        else{
            n = (n * -1 + mass.size()) % mass.size();
            for(int k = 0; k < n; k++){
                itc_lshift(mass);
            }
        }
    }
}
