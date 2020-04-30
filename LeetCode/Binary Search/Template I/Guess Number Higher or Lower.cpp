/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    int guessNumber(int n) {
        int low = 1, high = n;
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(!guess(mid))
                return mid;
            else if(guess(mid) == -1)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};