class solution{
	int longestConsecutive(vector<int>& nums){
		unordered_set _set;
		int len = nums.size();
		for(int i = 0;i < len;i++)
			_set.insert(nums[i]);
		
		int longest = 0;
		
		while(_set.size()>0)
		{
			int cnt = 1;
			int tmp = *_set.begin();
			_set.erase(tmp);
			int tmpR = tmp + 1;
			while(_set.count(tmpR))
			{
				cnt++;
				_set.erase(tmpR);
				tmpR--;
			}
			int tmpL = tmp - 1;
			while(_set.count(tmpL))
			{
				cnt++;
				_set.erase(tmpL);
				tmpL--;
			}
			longest = max(longest,cnt);
		}
		return longest;
	}
}