#include <iostream>
using namespace std;
int firstOccur(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    int ans=-1; //Ans is initalized with -1 to return -1 if key is not found in the array. 
               //If found, it will be updated to non -ve index value

    while(start<=end){

        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }

        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccur(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    
    int ans = -1; // Ans is initalized with -1 to return -1 if key is not found in the array.
                  // If found, it will be updated to non -ve index value

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int even[8] = {2, 2, 2, 4, 5, 6, 12, 12};

    cout << firstOccur(even, 8, 12) << endl;
    cout << lastOccur(even, 8, 12) << endl;
    

    return 0;
}