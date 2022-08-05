#include<iostream>

int sum_array_elements(int integers[], int length){
     if (length <= 0){
        return -1;
    }
    int sum =0;
    for(int i =0; i<length; i++){
        sum = sum+ integers[i];

    }
    return sum;
    
}

bool is_palindrome(int integers[], int length){
    if (length <= 0){
        return -1;
    }

    int i=0,j=length-1;

    while(i<j){

    if(integers[i] != integers[j]){
        return false;
    }

    i++;

    j--;

    }

    return true;
}


int sum_if_palindrome(int integers[], int length){
     if (length <= 0){
        return -1;
    }
    if(is_palindrome(integers,length)==1){
            return sum_array_elements(integers, length);
    }   
    else{
         return -2;
      
    }
    

}
