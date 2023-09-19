#include<iostream>
#include<string>

using namespace std;

bool valid(char ch) 
{
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return 1;
    }    
    return 0;
}

char toLowerCase(char ch) 
{
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool check_palindrome(string a)
{
    int s = 0; 
    int e = a.length() -1;

    while(s<=e)
    {
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool is_palindrome(string st)
{
    string temp = "";

    for( int i = 0; i<st.length(); i++)
    {
        if(valid(st[i])){
            temp.push_back(st[i]);
        }
    }

    for( int j = 0; j<temp.length(); j++)
    {
        temp[j] =  toLowerCase(temp[j]);
    }

    return check_palindrome(temp);
}

int main()
{
    string s ="A man, a plan, a canal: Panama";
    string h = "no @on";
    cout<<is_palindrome(h);
}