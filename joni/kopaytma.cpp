//   Jamshidbek Akhlidinov
//   20 - 8 2023 11:11:46
//   https://github.com/JamshidbekAkhlidinov

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;

    int s=1,i=a;
    while (i<=b){
        if(i%2==1){
            cout<<i<<" ";
            s*=i;
        }
        i+=1;
    }
    cout<<"S="<<s;
}