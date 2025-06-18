#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum = 1;
    int mul = 0;
    int dob = 0;
    
    for (int i = 0; i<num_list.size(); i++) {
        sum *= num_list[i];
        mul += num_list[i];
    }
    dob = mul * mul;
    
    if (sum < dob) {
        answer = 1;
    } else answer = 0;

    return answer;
}