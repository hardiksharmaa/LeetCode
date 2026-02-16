class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i < 32; i++) {
            ans <<= 1;
            ans |= (n & 1);//appending last bit form n to the result
            n >>= 1;// removing last bit form n
        }
        return ans;
    }
};