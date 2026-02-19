// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>> n;
//     while (n!=1){
//         int sum =0;

//             while(n>0){
//                 int r=n%10;
//                 sum+= r*r;
//                 n/= 10;
//             }
//             sum=n;

//             }
//             return true;

//     }
                                    //  Leetcode-202 Happy Number //

#include<iostream>
using namespace std;

// Recursive function to check Happy Number
bool isHappy(int n) {
    if(n == 1 || n == 7) {
        return true;
    }
    else if(n < 10) {
        return false;
    }
    else {
        int sum = 0;
        while(n != 0) {
            int r = n % 10;
            sum += r * r;
            n = n / 10;
        }
        return isHappy(sum); // recursion call
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(isHappy(n))
        cout << "Happy Number";
    else
        cout << "Not Happy Number";

    return 0;
}

  
