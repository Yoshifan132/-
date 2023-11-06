#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, a[100001];

bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}

int nibutan(int key){
    int left = -1, right = n;
    while (right - left > 1) {
        int mid = left + (right - left) / 2;

        if (isOK(mid, key)) right = mid;
        else left = mid;
    }
    if(right == n) right = -1;
    return right;
}

int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<nibutan(k)<<endl;
}