#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    int last = numbers.back();
    int second = numbers[numbers.size()-2];
    answer = last * second;
    
    return answer;
}