#include <iostream>

int main(){
   
    char* text = new char[4]{'H','o','l','a'};
     
    for (int x = 0; x < 4; x++){
         std::cout << text[x];
         
        }
    std::cout << std::endl;        
     
    std::cout << *text << std::endl;
    delete[] text;
    char* b = new char[4]{'2'};
    text = b;         
    std::cout << *text << std::endl;
    delete[] b;
     
    return 0;
}
