class Solution {
public:
    string decodeString(string s) {
        stack<int> _nums;
        stack<string> _string;
        string ans;
        int i = 0;
        int len = s.length();
        while(i < len)
        {
            int cnt = 0;
            if(s[i]<='9'&&s[i]>='0')
            {
                while(s[i]<='9'&&s[i]>='0')
                {
                    cnt = cnt*10 + (s[i]-'0');
                    i++;
                }
                _nums.push(cnt);
            }
            else if(s[i] == '[')
            {
                _string.push(ans);
                ans = "";
                i++;
            }
            else if(s[i] == ']')
            {
                if(!_string.empty()&&!_nums.empty())
                {
                    string tmp = _string.top();
                    _string.pop();
                    int cnt = _nums.top();
                    _nums.pop();
                    for(int j = 0;j < cnt;j++)
                    {
                        tmp+=ans;
                    }
                    ans = tmp;
                }
                i++;
            }
            else
            {
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};