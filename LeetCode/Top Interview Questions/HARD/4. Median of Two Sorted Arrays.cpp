class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        int m = A.size();
        int n = B.size();
        double median  = 0;
        if(m > n)
            return findMedianSortedArrays(B, A);
        int l = 0, r = m;
        while(true) {
            int partA = (l + r) / 2;
            int partB = (n + m + 1)/ 2 - partA;
            int ALeft = (partA == 0) ? INT_MIN : A[partA - 1];
            int ARight = (partA == m) ? INT_MAX : A[partA];
            int BLeft = (partB == 0) ? INT_MIN : B[partB - 1];
            int BRight = (partB == n) ? INT_MAX : B[partB];
            if(ALeft <= BRight && BLeft <= ARight) {
                if((n + m) & 1)
                    median = (double)(max(ALeft, BLeft));
                else 
                    median = (double)(max(ALeft, BLeft) + min(ARight, BRight)) / 2;    
                break;
            }
            else if(ALeft > BRight)
                r = partA - 1;
            else
                l = partA + 1;
        }
        return median;  
    }
};
