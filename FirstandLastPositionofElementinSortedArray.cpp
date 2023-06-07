
vector<int> searchRange(vector<int> &arr, int x)
{
	// Write your code here.
	int n = arr.size();
	// Initialise both first and last occurences to -1, incase x is not found in array.
	int idx1 = -1, idx2 = -1;
	for (int i = 0; i < n; i++)
	{
		// If the current element equals to x.
		if (arr[i] == x)
		{
			// If previously element was not found, it is x's first occurrence.
			if (idx1 == -1 && idx2 == -1)
			{
				idx1 = i;
				idx2 = i;
			}

			else
			{
				// Otherwise update last occurrence of x.
				idx2 = i;
			}
		}
	}

	vector<int> sol;
	sol.push_back(idx1);
	sol.push_back(idx2);
	return sol;

}

