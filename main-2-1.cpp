#include <iostream>
#include <string>

extern void print_binary_str(std::string decimal_number);
    
int main (int argc, char** argv) {
    char array[9] = "73";
    print_binary_str(array);
    return 0;
}
