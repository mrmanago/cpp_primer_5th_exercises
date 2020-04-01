#include <iostream>

int main()
{
    std::cout << "/*";              // legal 
    std::cout << "*/";              // legal
    //std::cout << /* "*/" */;         illegal original statement. Operator has no arguement
    std::cout << "*/";              
    std::cout << /*"*/" /* "/*"*/;  // legal
    return 0;
}
