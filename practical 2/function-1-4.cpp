#include <iostream>

void print_scaled(int array[3][3],int scale) {
    for (int i = 0; i<3; i++) {
        int number = 0;
        for (int j = 0; j<3; j++) {
            number = (array[i][j])*scale;
            std::cout << number << " ";
        }
        std::cout<<std::endl;
    }
}
