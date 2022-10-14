/*Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :

String S

Output Format :

'true' or 'false'

Constraints :

0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :

racecar

Sample Output 1:

true

Sample Input 2 :

ninja

Sample Output 2:

false

*/

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[50];
    cin >> input;

    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

#include<string.h>
bool miniChecker(char input[],int begin, int end){
    if(begin == end)
        return true;
    if(input[begin] != input[end])
        return false;
    if(begin < end + 1)
    	return miniChecker(input,begin+1,end-1);
    return true;
}

bool checkPalindrome(char input[]) {
    // Write your code here
	int len = strlen(input);
    if(len == 0)
        return true;
    return miniChecker(input,0,len-1);
}
