#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int start = my_string.length() - n;
    
    for (int i = start; i<my_string.length(); i++) {
        answer.push_back(my_string[i]);
    }
    
        return answer;
}