#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    string a = to_string(x);
    for (int i =0; i<a.size(); i++) {
        sum += a[i] - '0';
    } if(x % sum == 0) {
        return true;
    } else return false;
    
}