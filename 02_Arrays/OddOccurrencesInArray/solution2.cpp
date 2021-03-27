// https://app.codility.com/demo/results/trainingUT2AWG-VG3/

#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int result {0};

    for (int i:A)
        result ^= i;

    return result;
}