#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    
    int lastIndex = num_list.size() - 1;
    int addNum;
    
    if (num_list[lastIndex] > num_list[lastIndex - 1]) {
        addNum = num_list[lastIndex] - num_list[lastIndex - 1];
    }
    else {
        addNum = num_list[lastIndex] * 2;
    }
    answer.push_back(addNum);
    
    return answer;
}