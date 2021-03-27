//https://app.codility.com/demo/results/trainingB8V89D-A2W/

#include <algorithm>

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    bool prev = (N&1);
    N = N>>1;

    bool is_count = false;
    int curr_count = 0;
    int max_count = 0;

    while (N!=0)
    {
        bool curr = (N&1);

        if (prev && !curr)
            is_count = true;

        if (is_count)
        {
            if (!curr)
                ++curr_count;
            else
            {
                is_count = false;
                max_count = std::max(max_count, curr_count);
                curr_count = 0;
            }
        }

        prev = curr;
        N = N>>1;
    }

    return max_count;
}