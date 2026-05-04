#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int rangeBitwiseAnd(int left, int right) {
    int count=0;
    while(left<right){
        left=left>>1;
        right=right>>1;
        count++;
    }
    return left<<count;
}
int main() {
    cout<<rangeBitwiseAnd(5,7)<<endl;
    return 0;
}