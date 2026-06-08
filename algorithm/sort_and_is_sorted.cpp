#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;

void showNum(std::vector<int>& num);
void orderNum(std::vector<int>& num);

int main() {
  
    std::vector<int> num{9,1,2,3,4,5,6};
    
    bool quit = false;
    while(!quit){
        
        if (std::is_sorted(num.begin(), num.end())){
            cout << "this is sorted: ";
            quit = true;
        }
        else{
            cout << "this is not sorted: ";
        }
      
        showNum(num);
        orderNum(num);
    }
    return 0;
}

void showNum(std::vector<int>& num){
    
    for (int& n : num) {
          cout << n;
      }
      cout << "\n" << endl;
}

void orderNum(std::vector<int>& num){
    std::sort(num.begin(), num.end());
}
