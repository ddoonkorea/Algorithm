#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = my_string;
    
    sort(indices.rbegin(), indices.rend());

    for (int n: indices) {
        answer.erase(n,1);
    }
    
    return answer;
}