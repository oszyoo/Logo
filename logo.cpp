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
	char encoded[491] = "³³³3333H\x1AU\x1Acxƒxsˆ“x£ch³xc\x1A¸“ÈÓÓ\x1Ac˜È\x1AÓx£Ø“(³³cè“xã˜““\x1AÈ“cˆsxƒ\x1Ax“'“¸gcøÃxóÈ““X``c˜Ø\x1A#x“Ó(““xccc˜\x1AØxsÓ““xccc˜Ãh˜sÈ\x1Ac“sXóc˜S˜˜sX““sÈe“\x1Ac˜“ˆsxƒ“\x1Ax“c˜c\x1A¸sh³ÓÄÓ\x1Ac˜£Øs¨ÓÈ££c˜ã˜sè“X“““˜‰˜•ˆ•h\x1A!$!\x1ASÃ";
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
