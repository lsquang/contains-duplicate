 

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> count;
    for (int value : nums) {
        count[value] = 0;
    }
    for (int value : nums) {
        count[value] ++;
    }
    for (auto it : count) {
        if (it.second > 1) {
            return true;
        }
    }
    return false;
}



int main()
{
    std::cout << "Hello World!\n";
}
 