#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
    
    int number = stoi(decimal_number);
    int binary_digit, next, count = 0;
    next = number;
    
    while (next > 0) 
    {
        binary_digit = next % 2;
        next = (next - binary_digit)/2 ;
        count++;
    }
    
    
    int decimal_array[count];
    
    next = number;
    
    int iteration = 0;
    while (next>0) 
    {
        binary_digit = next % 2;
        next = (next - binary_digit)/2 ;
        decimal_array[iteration] = binary_digit;
        iteration++;
    }
    
    for (int i = count - 1; i >= 0 ; i--) {
        
        std::cout<<decimal_array[i];
        
    }
    std::cout<<std::endl;
    
    
}
