#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <armadillo>
#include <map>
#include <set>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <bitset>
#include <queue>
#include <functional>
#include <iterator>

using namespace std;
using namespace arma;

inline
string& replace_all(string&   str,const   string&   old_value,const   string&   new_value)   
{   
	while(true)   {   
		string::size_type   pos(0);   
		if(   (pos=str.find(old_value))!=string::npos   )   
			str.replace(pos,old_value.length(),new_value);   
		else   break;   
	}   
	return   str;   
}   

inline 
double sign(const double& x)
{
	if (x==0)
		return 0;
	else
		return x>0?+1:-1;
}

inline
double norm_common(const mat& m)
{
	double re = 0;
	for(auto i=m.begin(); i!=m.end(); ++i)
	{
		re += (*i) * (*i);
	}

	return sqrt(re);
}