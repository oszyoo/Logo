#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[]) 
{
	int nums [] = {0,1,2,37,39,5,8,6,13,7,10,11,3,9,12,15};
	char chars [] = {'`','+','s','y','o',':','\n','/',' ','.','-'};
	char encoded[491] = "³³³3333H\x1AU\x1Acxxsx£ch³xc\x1AΈΘΣΣ\x1AcΘ\x1AΣx£Ψ(³³cθxγ\x1AΘcsx\x1Ax'ΈgcψΓxσΘX``cΨ\x1A#xΣ(xccc\x1AΨxsΣxcccΓhsΘ\x1AcsXσcSsXsΘe\x1Acsx\x1Axcc\x1AΈsh³ΣΔΣ\x1Ac£Ψs¨ΣΘ££cγsθXh\x1A!$!\x1ASΓ";
	int i = 0, j = 0;
	int k = 491;
	for (i = 0; i < k; i++) {
		int num = (int)((int(encoded[i]) >> 4) & 0xF);
		int cnum = (int)((int(encoded[i]) >> 0) & 0xF);
		//std::cout << nums[num] << " " << chars[cnum];

		for (j = 0; j < nums[num]; j++) {
		  std::cout << chars[cnum];
		}

	}
	//std::cout << encoded[i] << int(encoded[i]) << " " << (int)((int(encoded[i]) >> 0) & 0xF) << " " << (int)((int(encoded[i]) >> 4) & 0xF);
	return 0;
}
