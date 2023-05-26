int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int size=arr.size();
	if(size == 0)
		return 0;
	else if ( m < arr[0] )
		return 0;
	else if ( m > arr[size-1])
		return size;
	for(int i=0; i<size ; i++)
	{
		if(arr[i+1] > m && arr[i] < m ) 
			return i+1;
		else if( m == arr[i] )
			return i;
	}
}

// it can be solved using binary sort also
// both perform the same

/* 
int searchInsert(vector<int>& nums, int target)
{
  int start = 0;
  int end = nums.size() - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (nums[mid] == target)
    {
      return mid;
    }
    if (nums[mid] > target){
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
 return end+1;
}
*/
