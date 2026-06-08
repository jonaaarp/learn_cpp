#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;

void showNum(const std::vector<int>& num);

int main() {
  
    std::vector<int> num{9,1,2,3,4,5,6};
    
    for(int i = 0; i < 2; i++){
        
        if (std::is_sorted(num.begin(), num.end())){
            cout << "this is sorted: ";
        }
        else{
            cout << "this is not sorted: ";
        }
      
        showNum(num);
        std::sort(num.begin(), num.end());
    }
    return 0;
}

void showNum(const std::vector<int>& num){
    
    for (const int& n : num) {
          cout << n;
      }
      cout << "\n" << endl;
}
