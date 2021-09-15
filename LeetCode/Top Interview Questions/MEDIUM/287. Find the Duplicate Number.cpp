class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int slow = v[0], fast = v[0];
        
        while(true)
        {
            slow = v[slow];
            fast = v[v[fast]];
            if(slow == fast) break;
        }
        
        slow = v[0];
        
        while(fast != slow)
        {
            slow = v[slow];
            fast = v[fast];
        }
        return slow;
    }
};