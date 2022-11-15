#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    int num[10]={};


    cin >>a;
    while(a>0){
        num[a%10]++;
        a/=10;
    }
    // for(int i =0; i<10; i++){
    //     cout<<num[i]<<"\n";
    // }
    int t=1;

    for(int i =0; i<10; i++){
        if((i==6) || (i==9)) continue;

        t = max(t, num[i]);
    }
    t = max(t, (num[6]+num[9]+1)/2);
    cout<<t;

}