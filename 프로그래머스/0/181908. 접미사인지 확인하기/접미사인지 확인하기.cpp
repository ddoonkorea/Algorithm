#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    
    for (int i = 0; i<my_string.length(); i++) {
        string str = my_string.substr(i);
        if (str == is_suffix) {
            answer = 1;
        }
    }
    return answer;
}