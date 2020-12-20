//
//  main.cpp
//  Assignment3.1
//
//  Created by Jianhua Che on 18/10/19.
//  Copyright © 2018  Jianhua Che. All rights reserved.
//

#include <iostream>

using namespace std;

int CountWays(int numStairs);

int main()
{
    int numStairs;
    cout<<"Please enter numStairs:";
    cin>>numStairs;
    cout<<"CountWays="<<CountWays(numStairs);
}


int CountWays(int numStairs)
{
    if(numStairs==1)
        return 1;
    if(numStairs==2)
        return 2;
    else
        return (CountWays(numStairs-1)+CountWays(numStairs-2));
    
}

