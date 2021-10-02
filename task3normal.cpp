#include<iostream>
using namespace std;
//12 11 13 5 6 7
int getmax(int arr[],int size);
int sort(int arr[],int size){
	int temp=0;
	int max_index=0;
	if(size>1){
		max_index=getmax(arr,size);
		temp=arr[size-1];
		arr[size-1]=arr[max_index];
		arr[max_index]=temp;
		sort(arr,size-1);
		}
	
}	
int getmax(int arr[],int size){
	int max=arr[0];
	int max_index=0;
	for(int i=1;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
			max_index=i;
		}
	}
	return max_index;
}
int main(){
	int arr[6]={12,11,13,5,6,7};
	sort(arr,6);
    for(int i=0;i<6;i++){
    	cout<<arr[i]<<" ";
	}
}
