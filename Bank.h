#ifndef _Bank_H_
#define _Bank_H_
#include"PersonalInfo.h"


class Bank
{
	bool SavingTime();
	bool BorrowGT(int LengthOfTime);



private:
	PersonalInfo * info;
};

bool Bank::SavingTime()
{
	info.SetVault(info.GetVault() + info.GetRGT());
	info.SetRGT(0);
	return true;
}

bool Bank::BorrowGT(int LengthOfTime)
{
	if (LengthOfTime > info.GetVault())
	{
		//��ʾ����ǰ�����
		return false;
	}
	info.SetRGT(LengthOfTime + info.GetGRT());
}


#endif // !_Bank_H_