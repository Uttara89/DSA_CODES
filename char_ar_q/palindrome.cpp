#include<iostream>
#include<vector>
using namespace std;

int bin_s(int n){
    int s = 0; 
    int e = n;
    int mid = s + (e-s)/2;
     int ans = -1;

    while(s<=e){
        int square = mid*mid;
        if(square == n){
            return mid;
        }
        else if( square > n){
            e = mid -1;
            
        }
        else{
            s = mid +1;
            ans = mid;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}



int main()
{
     int k;
     cin>>k;
     cout<< bin_s(k);
}
/* int sorted(int arr[], int n){
    for(int i = 0; i< n-1; i++)
    {
        int minindex = i;
        for(int j =i+1; j<n; j++){               Selection sort
            if(arr[j]<arr[minindex])
            minindex = j;
        }
        swap(arr[minindex], arr[i]);
    }
 } */