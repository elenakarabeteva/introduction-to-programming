void BubbleSort(int* arr, int n)
{
	bool swapped;
	
	for (size_t i = 0; i < n - 1; i++) 
    {
		swapped = false;
		for (size_t j = 0; j < n - i - 1; j++) 
        {
			if (arr[j] > arr[j+1]) 
            {
				swap(&arr[j], &arr[j + 1]);
				swapped = true;
			}

			if (swapped == false) 
            {
				break;
			}
		}
    }
}