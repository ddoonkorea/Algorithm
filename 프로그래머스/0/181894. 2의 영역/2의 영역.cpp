#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    
    auto start = find(arr.begin(), arr.end(), 2);
    
    if (start == arr.end()) {
        return {-1};
    }
    auto end = find(arr.rbegin(), arr.rend(), 2);
    
    vector<int>answer(start, end.base());
    
    return answer;
}