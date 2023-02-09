//floor no 
//arr[]={2,3,6,9,10,11,14,18};

// k=5 ;floor =3;
// k=4 ;floor =3;
// k=6 ;floor =6;
#include<stdio.h>
int floorarr(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
    }
    return arr[end];
}
int main(){
    int arr[]={2,3,6,9,10,11,14,18};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("enter key");
    scanf("%d",&key);
    int floor=floorarr(arr,size,key);
    printf("floor=%d",floor);
    return 0;
}
