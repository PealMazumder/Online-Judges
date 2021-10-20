class Solution {
public:
    /**
     * @param inputA: Input stream A
     * @param inputB: Input stream B
     * @return: The answer
     */
    string inputStream(string &inputA, string &inputB) {
        // Write your code here
        return finalInputStream(inputA) == finalInputStream(inputB) ? "YES" : "NO";
    }
    string finalInputStream(string &input) {
        string s;
        for(int i = 0; i < (int)input.size(); i++) {
            if(input[i] != '<')
                s.push_back(input[i]);
            else if(!s.empty())
                s.pop_back();
        }
        return s;
    }
};