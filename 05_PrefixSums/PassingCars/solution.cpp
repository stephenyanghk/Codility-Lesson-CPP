// https://app.codility.com/demo/results/trainingBAUHP9-SQK/

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    long long go_east {0};
    long long result {0};

    for (int i:A)
    {
        if (i==1)
            result += go_east;
        else
            ++go_east;
    }

    return result>1000000000?-1:result;
}