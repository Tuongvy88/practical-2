#include <iostream>

void count_digits(int array[4][4]) {
    int number[10] = {0,0,0,0,0,0,0,0,0,0};
    for (int k = 0; k<=9; k++) {
        for (int i = 0; i<4; i++) {
            for (int j = 0; j<4; j++) {
               if (array[i][j] == k) {
                   number[k]++;
               }
            }
        }
    }
    for (int l = 0; l<=9; l++) {
        std::cout<<l<<":"<<number[l]<<";" ;
    }   
    std::cout<<std::endl;
}
