#include<iostream>
using namespace std;

int trailzeros(long n){
    int count = 0;
    while(n>=5){
        count += n/5;
        n /= 5;
    }
    return count;
}

int main(){
    long n;
    cin >> n;
    cout << trailzeros(n) << endl;
    return 0;
}

/*
How to find a trailing zero in a number?
By counting the the no of zeroes(obvious)
But, a no(it has to be a natural no) ends with 0, when we multiply a number with 10
For example, 18*10 = 180, 2*10 = 20 etc
We can further break it down to no of (2*5) pairs that are present in its factorisation.
So, for example, 5! = 120 has one 2 and one 5, so no of trailing zeros = 1.
But there are some other cases also like, 10! has seven 2s and two 5s, and 10! = 3628800
So, we can say no of 5s can give us the no of trailing zeros in n!
But, what about cases like 32!? 32!=263130836933693530167218012160000000(7 trailing zeroes)
If we do its factorisation, we will see that, 32/5=6 but, no of zeroes in 32! = 7
So, we have to divide it again by 5^2. In other words, 32/25 = 1
So, 6+1 = 7 zeroes
So, the general formula is:
Count of 5s in prime factors of n! = floor(n/5) + floor(n/25) + floor(n/125) + ....
Time Complexity = O(log⁡5(n))O(log5​(n))
*/
