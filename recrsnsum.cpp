#include <iostream>
using namespace std;
int sum(int n){
     if(n ==0){
        return 0;
     }
     int i= sum(n-1)+ 1;
     return i;

}
int main(){
int n;
cin>>n;
cout<<sum(n);
}
