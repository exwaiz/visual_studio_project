

class Account {
public:
	explicit Account(int money)
	: balance(money)
	{
		interest = 0;
	}
	int getBalance()
	{
		return balance;
	}

	void deposit(int money){
		balance += money;
}

	void withdraw(int money)
	{
		balance -= money;
	}

	int applyBokri(int itrst){
		balance = balance + ((balance * itrst) / 100);
		return balance;
	}
	int applyBokri() {
		balance = balance + ((balance * interest) / 100);
		return balance;
	}
	int setInterest(int _interest)
	{
		interest = _interest;
		return interest;
	}

	int NyearsLater(int year_cnt)
	{
		double estimated_balance = balance;
		for (int i=0; i<year_cnt; i++)
		{
			estimated_balance = estimated_balance + ((estimated_balance * interest) / 100);
		}
		return (int)estimated_balance;
	}
	


private:
	int balance;
	int interest;
};