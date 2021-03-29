// https://app.codility.com/demo/results/trainingGXKCTC-HUA/

#include <unordered_set>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    unordered_set<int> s;

    for (int &i:A)
        s.insert(i);

    for (uint i=1; i<=A.size(); ++i)
    {
        if (s.find(i)==s.end())
            return i;
    }

    return A.size()+1;
}