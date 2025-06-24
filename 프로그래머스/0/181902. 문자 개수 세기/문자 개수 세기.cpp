#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    for (int i =0; i<my_string.size(); i++) {
        char c = my_string[i];
        if (c >= 'A' && c <= 'Z') {
            answer[c - 'A']++;
        } else if (c >= 'a' && c <= 'z') {
            answer[c - 'a' + 26]++;
        }
    }
    return answer;
}