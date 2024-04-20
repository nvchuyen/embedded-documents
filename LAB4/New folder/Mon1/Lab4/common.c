#pragma once
#include "common.h";
#include<stdbool.h>
/// <summary>
///
/// </summary>
/// <param name="number">Số truyền vào</param>
/// <param name="ordinal">bit thứ bao nhiêu(bit 3 thì dịch 2 bit)</param>
/// <returns></returns>
bool CheckBit(int number, int ordinal)
{
	int temp = number >> (ordinal - 1);
	int res = temp & 1;
	if (res == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Đặt bit thứ bit của number thành 1
/// </summary>
/// <param name="number"></param>
/// <param name="bit"></param>
/// <returns></returns>
int SetBit(int number, int bit)
{
	int temp = (1 << (bit - 1));
	int res = number | temp;
	return res;
}
