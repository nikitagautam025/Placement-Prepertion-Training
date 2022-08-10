class Solution {
public:
    unordered_set<int>a,b,c;
    vector<vector<string>>ans;
    vector<vector<string>> solveNQueens(int n) {
        vector<pair<int,int>>v;
        calc(v,0,n);
        return ans;
    }
    void calc(vector<pair<int,int>>&v, int i, int n)
    {
        if(i==n)
        {
            vector<string>temp;
            if(v.size() == n)
            {
                for(int i = 0; i<n;i++)
                {
                    string s; 
                    for(int j =0;j<n;j++)
                    {
                        if(v[i].second == j)
                            s+='Q';
                        else
                            s+='.';
                    }
                    temp.push_back(s);
                }
                ans.push_back(temp);
            }
        }
        else
        {
            for(int j = 0; j<n; j++)
            {
                if(!a.count(j) && !b.count(i+j) && !c.count(i-j)) //checking if it is a valid position
                {
                    v.push_back({i,j});
                    a.insert(j);
                    b.insert(i+j);
                    c.insert(i-j);
                    calc(v,i+1,n);
                    v.pop_back();
                    a.erase(j);
                    b.erase(i+j);
                    c.erase(i-j);
                }
            }
        }
    }
};
