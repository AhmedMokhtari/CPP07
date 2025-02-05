#include <iostream>
#include "Array.hpp"

int main( void ) {
    Array<int> arr(5);
    Array<std::string> arrStr(10);
    for (unsigned int i = 0;  i < arr.size() ; i++)
        arr[i] = i;
    for (unsigned  int i = 0;  i < arrStr.size() ; i++)
        arrStr[i] = "ALo test";

    for (unsigned int i = 0;  i < arrStr.size() ; i++)
        std::cout << arrStr[i] << " ";
    std::cout << std::endl;
    Array<int> arr1 = arr;

    Array<int> arr2;

    arr2 = arr1;
    for (unsigned int i = 0;  i < arr.size() ; i++)
        std::cout << arr[i] << " " ;
    std::cout << std::endl;
    for (unsigned  int i = 0;  i < arr1.size() ; i++)
        std::cout << arr1[i] << " " ;
    std::cout << std::endl;
    for (unsigned int i = 0;  i < arr2.size() ; i++)
        std::cout << arr2[i] << " " ;
    std::cout << std::endl;
    try{
        arr[5] = 22;
    }catch(std::out_of_range &e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}