#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    int number = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                for(int k=0; k<n; k++){
                    if(num[i]+num[j]==num[k]){
                        number++;
                        break;
                    }
                }
            }
        }
    }
    cout << number/2 << endl;
    getchar();
    getchar();
    return 0;
}