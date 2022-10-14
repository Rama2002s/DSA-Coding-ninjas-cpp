/*Input Format :

Integer n

Output Format :

Count of digits

Constraints :

1 <= n <= 10^6

Sample Input 1 :

 156

Sample Output 1 :

3

Sample Input 2 :

 7

Sample Output 2 :

1

*/

#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int n;
    cin >> n;

    cout << count(n) << endl;
}

int count(int n){
    //write your code here
    static int ans = 0;
    if(n==0)
        return 0;
    else{
        ans++;
    	count(n/10);
    }
    return ans;
}
