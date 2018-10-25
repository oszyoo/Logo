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
	char encoded[491] = "���3333H\x1AU\x1Acx�xs��x�ch�xc\x1A�����\x1Ac��\x1A�x�ؓ(��c��x����\x1A��c�sx�\x1Ax�'��gc��x����X``c��\x1A#x��(��xccc�\x1A�xs���xccc��h�s�\x1Ac�sX�c�S��sX��s�e�\x1Ac���sx��\x1Ax�c�c\x1A�sh����\x1Ac���s�����c���s��X���������h\x1A!$!\x1AS�";
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
