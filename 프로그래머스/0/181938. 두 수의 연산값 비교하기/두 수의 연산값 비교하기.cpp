#include <string>
#include <iostream>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string str = to_string(a) + to_string(b);
    int result = 2 * a * b;
    int i_str = stoi(str);

    if (i_str >= result) {
        answer = i_str;
    } else {
        answer = result;
    }

    return answer;

}