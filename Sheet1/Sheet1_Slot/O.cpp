/*
 * O.cpp
 *
 *  Created on: Jan 26, 2021
 *      Author: Osama Mahmoud
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	char C1 , C2 ,C3;
	cin >> C1 >> C2 >> C3;

	if((C1 == C2) && (C1 == C3))
		cout << "Won" <<"\n";
	else
		cout << "Lost" <<"\n";

	return 0;
}




