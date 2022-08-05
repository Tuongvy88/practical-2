#include<iostream>

using namespace std;
int sum_if_palindrome(int integers[], int length);
bool is_palindrome(int integers[], int length);


int main(){
     int a[5] = {1,2,1,2,1};
     cout<<sum_if_palindrome(a, 5);
     
    return 0;
}

