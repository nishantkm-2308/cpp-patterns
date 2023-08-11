#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            // char ch = 'A'+row-1;
            // cout<<ch<<" ";
            cout<<char('A' + row - 1)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}