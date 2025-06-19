#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for (int i = l; i<r; i++) {
        string Str = to_string(i);
        bool isZeroFive = false;
        if (i % 5 == 0) {
            for (int j = 0; j<Str.size(); j++) {
                if (Str[j] == '0' || Str[j] == '5')
                    isZeroFive = true;
                else {
                    isZeroFive = false;
                    break;
                }
            }
            if (isZeroFive == true) answer.push_back(i);
        }
    }
    if (answer.empty()) answer.push_back(-1);
    return answer;
}