#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int l,int m,int h){
	int i=l,j=m+1,k=l,c[50];
	while(i<=m && j<=h){
if(arr[i]<arr[j]){
	c[k]=arr[i];
	k++;
	i++;
	}else{
		c[k]=arr[j];
		k++;
		j++;
	}
}
	while(i<=m){
		c[k]=arr[i];
		k++;
		i++;
	}
	while(j<=m){
		c[k]=arr[j];
	k++;
	j++;
	}
for(int i=l;i<=k;i++){
	arr[i]=c[i];
}
}
void merge_sort(int *arr,int low,int high){
int mid;
	if(low<high){
 mid=(low+high)/2;
merge_sort(arr,low,mid);
merge_sort(arr,mid+1,high);
merge( arr, low, mid, high);
}
}
int main()
{
    int myarray[30], num;
    cout<<"Enter number of elements to be sorted:";
    cin>>num;
    cout<<"Enter "<<num<<" elements to be sorted:";
    for (int i = 0; i < num; i++) { cin>>myarray[i];
    }
    merge_sort(myarray, 0, num-1);
    cout<<"Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<"\t";
    }
}