vector<int> subsetSum(vector<int> &num){
   vector<int> ans;

    for (int i = 0; i < (1 << num.size()); i++) {
        int sm = 0;
        int ii = i;
        for (int j = 0; j < num.size(); j++) {
            int f = ii % 2;
            ii /= 2;
            sm += f * num[j];
        }
        ans.push_back(sm);
    }

    sort(ans.begin(), ans.end());
    return ans;
}
