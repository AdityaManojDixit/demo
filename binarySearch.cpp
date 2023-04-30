// Mistake: Variable Shadowing
#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start=0;
    int end= size-1;
    int mid = start + (end-start)/2; //Optimization of Mid=(start+end)/2 to prvnt (start+end) > int range

    while(start<=end)
    {
        
        if (arr[mid]==key)
        {
            return mid;
        }

        if(key>arr[mid])
        {
            start=mid+1; //start is updated
        }
        else{
            end=mid-1;  //end is updated
        }
        mid = start + (end - start) / 2;
        // mid is updated otherwise fxn will take calculate mid with initial start & end i.e. 0 & size-1
        // mid is calculated using updated start and end
        //  Variable Shadowing: int mid = (start + end)/2; Redeclaration of mid inside while loop
    }
    return -1;
}

int main()
{ 
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,6,9,12,16};
    cout<< binarySearch(even, 6,12) <<endl;
    cout<< binarySearch(even, 6,6) <<endl;
    cout<< binarySearch(odd, 5,4)  <<endl;
    cout<< binarySearch(odd, 5, 7) <<endl;

    return 0;
}