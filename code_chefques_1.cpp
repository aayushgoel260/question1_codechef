#include <iostream>
using namespace std;

int main() {
    int n[4];
    int count=0;
    for(int i=0;i<4;i++){
        cin>>n[i];
        if(n[i]>=10){
            count++;
        }
    }
    cout<<count;
	return 0;
}