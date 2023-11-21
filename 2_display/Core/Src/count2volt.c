#include <math.h>

int max_count;

float count2volt(int res, int count){

    max_count = pow(2, res);
    
    return(3.3*count/max_count);

}
