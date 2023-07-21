#include <iostream>
using namespace std;
void merge(int *,int, int , int );
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
        //divide the array at mid and sort independently using merge sort
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        //merge or conquer sorted arrays
        merge(arr,low,high,mid);
    }
}
// Merge sort 
void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}
// read input array and call mergesort
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
// // #include<bits/stdc++.h>
// // using namespace std;
// // void mergesort(int arr1[],int arr2[],int ans[],int n,int m){
// //  // int n=sizeof(arr1)/sizeof(arr1[0]);
// //  // int m=sizeof(arr2)/sizeof(arr2[0]);
// //   // int =sizeof(arr2)/sizeof(arr2[0]);

// //  // int max=n+m;
// //  int k=0,i=0,j=0;
// //  while(i<n && j<m){
// //  	if(arr1[i]<arr2[j]){
// //  		ans[k]=arr1[i];
// //  		k++;
// //  		i++;
// //  	}else{
// //  		ans[k]=arr2[j];
// //  		k++;
// //  		j++;
// //  	}
// //  }
// //  while(i<n){
// //  		ans[k]=arr1[i];
// //  		k++;
// //  		i++;
// //  	}
// //  	while(j<m){
// //  		ans[k]=arr2[j];
// //  		k++;
// //  		j++;
// //  	}
// //  	for(int i=0;i<n+m;i++){
// //  		cout<<ans[i]<<" ";
// //  	}
// //  	// return ans;
// // }
// // int* merge(int ans[],int arr1[],int low,int high){
// // 	if(low==high){
// // 		int anss[1];
// // 		ans[0]=arr1[low];
// // 		return anss;
// // 	}
// // 	int mid=(low+high)/2;
// // 	int fc[]=merge(arr1,low,mid);
// // 	int sc[]=merge(arr1,mid+1,high);
// // 	int n=sizeof(fc)/sizeof(fc[0]);
// // 	int m=sizeof(sc)/sizeof(sc[0]);
// // 	mergesort(fc,sc, n, m);
// // }
// // int main(){
	
// // 	int arr1[]={7,3,2,8,15,1};
// // 	int n=sizeof(arr1)/sizeof(arr1[0]);
// // 	int ans[n];
// // 	ans[]=merge(ans,arr1,0,n);
// // 	// mergesort(arr1,arr2,ans, n, m);

// // }
