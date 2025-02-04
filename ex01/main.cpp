#include <iostream>
#include "iter.hpp"


template <typename T>
void function(T t)
{
    t = 55;
    std::cout << t <<  " ";
}
int main( void ) {
    int arr[] = {1,2,3,4,5,6};

    iter(arr, sizeof(arr) / sizeof(arr[0]), function);
    std::cout << std::endl;


    for(int i  = 0; i < 6 ;i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl; 
    std::string arr1[] = {"alo", "test", "allo"};
    iter(arr1, sizeof(arr1) / sizeof(arr1[0]), function);
    std::cout << std::endl;
    for(int i  = 0; i < 3 ;i++)
        std::cout << arr1[i] << " ";

    std::cout << std::endl;
    std::string alo = "sdf";
    std::cout << alo << std::endl;
    alo = 55;
    std::cout << alo << std::endl;
    std::cout << std::endl;
}