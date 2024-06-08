#include<iostream>
using namespace std;
int main()
    {
        char c;
        cin>>c;
        if(c<='0' && c>'9'){
            cout<<"its Digit.";
    }else{
        cout<<"Bad inpout";
        }
        return 0;
    }