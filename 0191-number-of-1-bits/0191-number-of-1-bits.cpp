class Solution {
public:
    int hammingWeight(int n) {
        int cnt=__builtin_popcountll(n);
        return cnt;
    }
};