#include<stdio.h>

int binary_search(int arr[],int left,int right,int key)
{
	if(left<=right)
	{
		int mid = (left+right)/2;
		
		if(arr[mid]==key)
		return mid;
		
		else if(key<arr[mid])
		return binary_search(arr,left,mid-1,key);
		
		else if(key>arr[mid])
		return binary_search(arr,mid+1,right,key);
	}
	
	return -1;
}

int main()
{
	int arr[]={2,5,7,9,10,15,19,23,25,28,29,36,47,58,69};
	
	int size = sizeof(arr)/sizeof(int);
	
	int index = binary_search(arr,0,size-1,6751275);
	
	if(index==-1)
	printf("value is not present");
	else
	printf("value is present at index number %d",index);
}