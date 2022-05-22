#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

struct Data
{
	UINT Index;
	UINT Score;
};

void ReadData(Data* data)
{
	FILE* file;
	fopen_s(&file, "Data.txt", "r");
	{
		for (UINT i = 0; i < USHRT_MAX; i++)
		{
			fscanf_s(file, "%d, %d", &data[i].Index, &data[i].Score);
		}
		
	}
	fclose(file);

}

Data* SequenceSearch(Data* datas, UINT size, UINT target, OUT UINT* count)
{
	*count = 0;
	Data* result = NULL;

	for (UINT i = 0; i < UINT_MAX; i++)
	{
		if (target == datas[i].Score)
		{
			*count = i;
			result = &datas[i];
			break;
		}
			
	}
	return result;
}

Data* BinarySearch(Data* datas, UINT size, UINT target, OUT UINT* count)
{
	*count =  0;

	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int middle = (left + right) / 2;

		if (datas[middle].Score == target)
			return &datas[middle];
		else if (target > datas[middle].Score)
			left = middle + 1;
		else if (target < datas[middle].Score)
			right = middle - 1;

		*count = (*count) + 1;
	}

	return NULL;
}

int BinaryCompare(const void* val1, const void* val2)
{
	Data* data1 = (Data*)val1;
	Data* data2 = (Data*)val2;

	if (data1->Score > data2->Score)
		return 1;
	else if (data1->Score < data2->Score)
		return -1;

	return 0;
}
int main()
{
	Data datas[USHRT_MAX];
	ReadData(datas);

	UINT count = 0;
	UINT target = 21454;

	//sequencesearch
	{
		Data* result = SequenceSearch(datas, USHRT_MAX, target, &count);
	}
	printf("¼øÂ÷Å½»ö : %d \n", count);

	//BinarySearch
	{
		Data* result = BinarySearch(datas, USHRT_MAX, target, &count);

	}
	printf("ÀÌÁøÅ½»ö : %d\n", count);

	//STL
	{
		bsearch((void*)&target, (void*)datas, USHRT_MAX,sizeof(datas) , BinaryCompare);
	}
	printf("ÀÌÁøÅ½»ö : %d\n", count);

	return 0;
}