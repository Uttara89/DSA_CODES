#include<iostream>
#include<array>

using namespace std;

bool is_possible(int arr[],int mid, int n , int m ){
    int student_count = 1;
    int pagesum = 0;

    for( int i =0; i<n;i++){
        if(pagesum + arr[i] <= mid){
            pagesum += arr[i];
        }
        else{
            student_count++;
            if(student_count > m || arr[i]>mid){
                return false;
            }
            pagesum = arr[i];
        }
        if(student_count>m){
            return false;
        }
    }
    return true;
}

int allocate_book(int arr[], int n, int m){

    int s = 0;
    int sum = 0;
    int ans = 0;
    for(int i =0; i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(is_possible(arr, mid,n ,m)){
            ans = mid;
            e = mid-1;
           
        }
        else{
            s = mid+1;
           
        }
         mid = s + (e-s)/2;
    }
    return ans;
}

int main(){


int arr[4] ={10,20,30,40};
    int ans = allocate_book(arr, 4,2);
    cout<<ans;
}