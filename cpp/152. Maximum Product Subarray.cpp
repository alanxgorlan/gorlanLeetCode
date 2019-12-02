class solution
{
	int maxProduct(vector<int>& nums)
	{
		int len = nums.size();
		int maxtmp = nums[0];
		int mintmp = nums[0];
		int ans = nums[0];
		for(int i = 1;i<len;i++ ){
			int a = maxtmp*nums[i];
			int b = mintmp*nums[i];
			maxtmp = max(max(a,b),nums[i]);
			mintmp = min(min(a,b),nums[i]);
			ans = max(anx,max);
		}
		return ans;
	}
}