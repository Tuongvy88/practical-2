#include <iostream>
#include <stdlib.h>
extern void count_digits(int array[4][4]);

int main (int argc, char** argv) {
    int example[4][4] = {{0,1,2,3},{3,4,5,6},{6,7,8,9},{9,10,11,12}};
    count_digits(example);
    return 0;
}
