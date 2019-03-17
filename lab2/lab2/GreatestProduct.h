#include <vector>
#include <iostream>
#include <algorithm>
int GreatestProduct(std::vector<int> vec,int k)
{
	int min_number=0,result=1;
	std::vector<int> selected = { -1 };
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i]> min_number)
		{			
			if (selected.size() < k)							
				selected.push_back(vec[i]);

			else

			{
				int min_index = 0;
				int second_min=1;
				for (int j = 1; j < k; j++)
				{
					if (selected[min_index] > selected[j])
					{			
						second_min = min_index;
						min_index = j;
					}
				}
				if (vec[i] > selected[min_index]) selected[min_index] = vec[i];
				min_number = std::min(vec[i], selected[second_min]);
			}
		}
		

	}
	for (int i = 0; i < selected.size(); i++) result = result * selected[i];
	
	return result;
}