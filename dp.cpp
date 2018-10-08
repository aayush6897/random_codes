/*INCREDIBLE HULK
The Planet Earth is under a threat from the aliens of the outer space and the Marvel Avengers team is busy fighting against them. Meanwhile, The Incredible Hulk has to defeat an enemy who is N steps above the level where he is standing (assume it as the 0th level). Hulk, because of his incredible jumping ability can take jumps in power of 2. In order to defeat the enemy as quickly as possible he has to reach the Nth step in minimum moves possible. Help Hulk to find the same and contribute in saving the Mother Earth.


Input Format:
The first line contains the number of test cases T. T test cases follow: The first line of each test case contains a number N.

Constraints:
1 <= T <= 10 1 <= N <= 10^5
Output Format:
Output T lines, containing the minimum number of moves required by Hulk to reach the Nth step

Sample Input:
3
3
4
5
Sample Output:
2
1
2
*/ 


#include <iostream>
#include<math.h>
using namespace std;
int x(int y)
{
    for(int i=0;i<=32;i++)
    {
        if(y==pow(2,i))
            return(1);
    }
    for(int i=0;i<=32;i++)
    {
        if(y<pow(2,i))
            return(x(y-pow(2,i-1))+1);
    }
}

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
    int u=x(n);
    cout<<u<<endl;
        
    }
}

