int binarySearch (int* arr, int target, int start, int end)
{
	if (end >= start)
	{
		int half = (start + end)/2; 

		if (*(arr+half) == target) return half;

		else if (*(arr+half) > target) return binarySearch(arr, target, start, half-1);

		else return binarySearch(arr, target, half+1, end);
	}
	return -1;
}

