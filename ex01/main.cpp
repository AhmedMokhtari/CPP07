#include <iostream>
#include "iter.hpp"



template <typename T>
void function(T &t)
{
    std::cout << t <<  " ";
}

int main( void ) {
    int arr[] = {1,2,3,4,5,6};

    iter(arr, sizeof(arr) / sizeof(arr[0]), function<int>);
    std::cout << std::endl;
    std::string arr1[] = {"alo", "test", "allo"};
    iter(arr1, sizeof(arr1) / sizeof(arr1[0]), function<std::string>);
    std::cout << std::endl;
}