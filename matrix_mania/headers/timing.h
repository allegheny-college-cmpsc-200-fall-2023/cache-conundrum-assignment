#include <math.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

float res;
double timer;
//srand(time(NULL));
struct timeval tstart, tend;

float net_time(struct timeval start, struct timeval end) {
    return end.tv_sec - start.tv_sec + (end.tv_usec - start.tv_usec)/1.e6;
}