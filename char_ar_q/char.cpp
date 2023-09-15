#include<iostream>
#include<array>

using namespace std;

char to_lower_case(char s)
{
    if(s>='a' && s<='z')
    return s;
    else{
        s = s -'A' +'a';
    }
    return s;
}

bool is_Palindrome( char arr[], int size)
{
    int s = 0; 
    int e = size-1;

    while(s<e){
        if(to_lower_case(arr[s])!=to_lower_case(arr[e]))
        return 0;
        else{
            s++;
            e--;
        }
    }
    return 1;
    
}

int main()
{
    char arr[20];
    cin>>arr;
    cout<<is_Palindrome(arr,4);
    cout<<to_lower_case('S');


}