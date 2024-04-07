#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	scanf("%d",arr+i);


	for(int i=0;i<n;i++){
		if(arr[i]==-101)
		continue;
		int flag=0;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				arr[j]=-101;
				flag=1;
			}
		}
		if(flag==0)
		printf("%d ",arr[i]);
	}
}