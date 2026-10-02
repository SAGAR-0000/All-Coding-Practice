class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if (n-- == 1) return {"()"};
        vector<string> res;
        string s = "(";
        auto dfs = [&](auto& self, int O, int C) -> void {
            if (O == 0 && C == 0) {
                res.push_back(s + ")");
                return;
            }
            if (O > 0) {
                s += '(';
                self(self, O - 1, C);
                s.pop_back();
            }
            if (C >= O) {
                s += ')';
                self(self, O, C - 1);
                s.pop_back();
            }
        };
        dfs(dfs, n, n);

        return res;
    }
};
