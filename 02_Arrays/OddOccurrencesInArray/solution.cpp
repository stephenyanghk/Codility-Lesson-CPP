// https://app.codility.com/demo/results/trainingSSJAKF-EYK/

#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    unordered_set<int> s;
    for (int i:A)
    {
        if (s.find(i)==s.end())
            s.insert(i);
        else
            s.erase(i);
    }

    return *(s.begin());    
}