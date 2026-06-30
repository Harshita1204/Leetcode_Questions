class Solution {
public:
     vector<vector<int>>ans;
     vector<int>temp;
     void solve(int start , int k , int n){
        if(temp.size()==k){
            ans.push_back(temp);
            return ;
        }
        for(int i = start ; i<=n ;i++){
            temp.push_back(i);
            solve(i+1,k,n);
            temp.pop_back();
        }
     }
    vector<vector<int>> combine(int n, int k) {
        solve(1,k,n);
        return ans;
    }
};