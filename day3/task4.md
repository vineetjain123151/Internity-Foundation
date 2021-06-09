# 1. Find given element in given array (might be unsorted)

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            cout<<"found at position:"<<i+1;
            return 0;
        }
    }
    cout<<"Not found";
    

    return 0;
}


2. Find given element in sorted array.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    int l=0;
    int h=n;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==ele)
        {
            cout<<mid+1;
            return 0;
        }
        else if(ele<arr[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<"not found";
    return 0;
}


3. Find minimum element in rotated sorted array.

#include<iostream>
using namespace std;
int pivot(int arr[],int n)
{
    int l=0;
    int h=n-1;
    while(l<h)
    {
        int mid=(l+h)/2;
        if(arr[mid]>arr[mid+1])
        {
            return mid;
        }
        if(arr[mid]<arr[mid-1])
        {
            return mid-1;
        }
 
        if(arr[mid]>=arr[l])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
 
    }
 
    return -1;
}
int main()
{
 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int piv=pivot(arr,n);
 
    cout<<arr[piv+1];
}


4. Find given element in rotated sorted array.

#include<iostream>
using namespace std;
int pivot(int arr[],int n)
{
    int l=0;
    int h=n-1;
    while(l<h)
    {
        int mid=(l+h)/2;
        if(arr[mid]>arr[mid+1])
        {
            return mid;
        }
        if(arr[mid]<arr[mid-1])
        {
            return mid-1;
        }
 
        if(arr[mid]>=arr[l])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
 
    }
 
    return -1;
}
 
int binary(int arr[],int l,int h,int ele)
{
    while(l<h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==ele)
        {
            return mid+1;
        }
        else if(ele<arr[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    int piv=pivot(arr,n);
    if(piv==-1)
    {
        cout<<binary(arr,0,n-1,ele);
        return 0;
    }
    if(ele==arr[piv])
    {
         cout<<piv;
         return 0;
    }
    if(ele>=arr[0])
    {
        cout<<binary(arr,0,piv-1,ele);
        return 0;
    }
    else
    {
        cout<<binary(arr,piv+1,n-1,ele);
        return 0;
    }
 
    cout<<"not found";
}


5. Find given element in sorted array using ternary search

#include <iostream>
using namespace std;
 
int ternarySearch(int l, int r, int key, int ar[])
{
    if (r >= l) {
 
 
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
 
 
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
 
 
 
        if (key < ar[mid1]) {
 
 
            return ternarySearch(l, mid1 - 1, key, ar);
        }
        else if (key > ar[mid2]) {
 
 
            return ternarySearch(mid2 + 1, r, key, ar);
        }
        else {
 
 
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
    }
 
 
    return -1;
}
 
int main() {
	 int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    cout<<ternarySearch(0,n,ele,arr);
	return 0;
}
