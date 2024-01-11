include<iostream>
using namespace std;
int main() {
    int n,factorial=1;
cout<<" enter\n";
cin>>n;
for(int i=1;i<=n;i++){
    factorial=factorial*i;
}
cout<<"factorial is:"<<factorial<<endl;
}
