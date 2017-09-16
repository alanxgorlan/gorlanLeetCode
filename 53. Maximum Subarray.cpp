class solution
{
	public:
		int maxSubarray(vector<int>& nums)
		{
			int len = nums.size();
			int tmp = -2147483647;
			int sum = 0;
			for(int j = 0;j < len;j++)
			{
				if(sum < 0)
					sum = 0;
				if(sum + nums[j] >tmp)
					tmp = sum + nums[j];
			}
			return tmp;
		}
}