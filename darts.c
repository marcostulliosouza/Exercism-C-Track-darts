#include "darts.h"
#include <stdio.h>
#include<math.h>
uint8_t score(coordinate_t landing_position){
    double distance = sqrt(landing_position.x*landing_position.x+landing_position.y*landing_position.y);
    if (distance > 10) return 0;
    else if (distance > 5 ) return 1;
    else if (distance > 1) return 5;
    else return 10;
} 