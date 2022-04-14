#include <iostream>
#include "function01.h"  // a extensao e o h
#include "function02.h"

int main ()  {

    std::cout << "Results first function is  "  << result01::sum(10,20)  << "\n";
    std::cout << "Results second function is "  << result02::sum(10,20)  << "\n";


    return 0;
  
}
