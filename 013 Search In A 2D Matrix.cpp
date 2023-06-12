bool searchMatrix(vector<vector<int>>& mat, int target)
{
    int i=0,j=mat.size()-1;

    while (i<=j)
    {
            int mid = i+(j-i)/2;
        
            if (mat[mid][0]>=target)
                j = mid-1;
            else
                i = mid+1;
    }

    if (mat[i-1][0]>target)
        return false;

    if (i!=mat.size() and mat[i][0]==target)
        return true;
    i--;

    int ii = 0,jj = mat[i].size()-1;

    while (ii<=jj)
    {
        int mid = ii+(jj-ii)/2;

        if (mat[i][mid]>target)
            jj = mid-1;
        else
            ii = mid+1;
    }
    if (mat[i][ii-1]==target)
        return true;
    return false;
         
}
