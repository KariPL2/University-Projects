#include <iostream>
#include <string>

using namespace std;



class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date(int t_day, int t_month, int t_year)
	{
		int a, b, c;
		a = day;
		b = month;
		c = year;
		year = t_year;
		month = t_month;
		day = t_day;
		if (datecheck(day, month, year) == false)
		{
			day = a;
			month = b;
			year = c;
			cout << endl << "false";
		}
	}
	bool datecheck(int t_day, int t_month, int t_year)
	{
		{
			if (t_year % 400 == 0 or t_year % 4 == 0 and t_year % 100 != 0)
			{
				if (t_month == 2)
				{
					if (t_day >= 1 && t_day <= 29)
					{

						return true;

					}
					else
					{

						return false;
					}
				}

				else if (t_month == 1 or t_month == 3 or t_month == 5 or t_month == 7 or t_month == 8 or t_month == 10 or t_month == 12)
				{

					if (t_day >= 1 && t_day <= 31)
					{
						return true;
					}
					else
					{
						return false;
					}
				}

				else if (t_month == 4 or t_month == 6 or t_month == 9 or t_month == 11)
				{

					if (t_day >= 1 && t_day <= 30)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				if (t_month == 2)
				{

					if (t_day >= 1 && t_day <= 28)
					{
						return true;
					}
					else
					{
						return false;
					}
				}

				else if (t_month == 1 or t_month == 3 or t_month == 5 or t_month == 7 or t_month == 8 or t_month == 10 or t_month == 12)
				{

					if (t_day >= 1 && t_day <= 31)
					{
						return true;
					}
					else
					{
						return false;
					}

				}

				else if (t_month == 4 or t_month == 6 or t_month == 9 or t_month == 11)
				{

					if (t_day >= 1 && t_day <= 30)
					{
						return true;
					}
					else
					{
						return false;
					}

				}
				else
				{
					return false;
				}
			}

		}
	}
	int getDay()
	{
		return day;
	}
	int getMonth()
	{
		return month;
	}
	int getYear()
	{
		return year;
	}
	void setYear(int t_year)
	{
		year = t_year;
	}
	void setMonth(int t_month)
	{
		month = t_month;
	}
	void setDay(int t_day)
	{
		day = t_day;
	}
	void addDays(int g)
	{
		
		day = day + g;

		if (year % 400 or year % 4 == 0 and year % 100 != 0)
		{
			if (month == 2)
			{
				if (day > 29)
				{
					month++;
					day = day - 29;
				}
				if (day <= 0)
				{
					month--;
					day = day + 29;
				}
				else
				{
					return;
				}
			}
			if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)
			{
				if (day > 31)
				{
					month++;
					day = day - 31;
					if (month == 13)
					{
						month = 1;
						year++;
					}
				}
				if (day <= 0)
				{
					month--;
					day = day + 31;
					if (month == 0)
					{
						month = 12;
						year--;
					}
				}
				else
				{
					return;
				}
			}
			if (month == 4 or month == 6 or month == 9 or month == 11)
			{
				if (day > 30)
				{
					month++;
					day = day - 30;
				}
				if (day <= 0)
				{
					month--;
					day = day + 30;
				}
				else
				{
					return;
				}
			}
		}
		else
		{
			if (month == 2)
			{
				if (day > 28)
				{
					month++;
					day = day - 29;
				}
				if (day <= 0)
				{
					month--;
					day = day + 28;
				}
				else
				{
					return;
				}
			}
			if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)
			{
				if (day > 31)
				{
					month++;
					day = day - 31;
					if (month == 13)
					{
						month = 1;
						year++;
					}
				}
				if (day <= 0)
				{
					month--;
					day = day + 31;
					if (month == 0)
					{
						month = 12;
						year--;
					}
				}
				else
				{
					return;
				}
			}
			if (month == 4 or month == 6 or month == 9 or month == 11)
			{
				if (day > 30)
				{
					month++;
					day = day - 30;
				}
				if (day <= 0)
				{
					month--;
					day = day + 30;
				}
				else
				{
					return;
				}
			}
		}
		if (year % 400 or year % 4 == 0 and year % 100 != 0)
		{
			if (month == 2)
			{
				if (day <= 0 or day>29)
				{
					addDays(0);
				}
				else
				{
					return;
				}
			}
			if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)
			{
				if (day <= 0 or day > 31)
				{
					addDays(0);
				}
				else
				{
					return;
				}
			}
			if (month == 4 or month == 6 or month == 9 or month == 11)
			{
				if (day <= 0 or day > 30)
				{
					addDays(0);
				}
				else
				{
					return;
				}
			}
		}
		else
			if (month == 2)
			{
				if (day <= 0 or day > 28)
				{
					addDays(0);
				}
				else
				{
					return;
				}
			}
		if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)
		{
			if (day <= 0 or day > 31)
			{
				addDays(0);
			}
			else
			{
				return;
			}
		}
		if (month == 4 or month == 6 or month == 9 or month == 11)
		{
			if (day <= 0 or day > 30)
			{
				addDays(0);
			}
			else
			{
				return;
			}
		}
	}
	void set(int t_day, int t_month, int t_year)
	{
		int a, b, c;
		a = day;
		b = month;
		c = year;
		year = t_year;
		month = t_month;
		day = t_day;
		if (datecheck(day, month, year) == false)
		{
			day = a;
			month = b;
			year = c;
			cout << "false";
		}
	}
	string toString()
	{
		if (day >= 1 and day <= 9)
		{
			return '0' + to_string(day) + '.' + to_string(month) + '.' + to_string(year);
		}
		else
		{
			return  to_string(day) + '.' + to_string(month) + '.' + to_string(year);
		}
	}
	string toXML()
	{
		return "<Date day = \"" + to_string(day) + "\" month = \"" + to_string(month) + "\" year = \"" + to_string(year) + "\">" ;
	}
};


int main()
{
	Date date(13, 5, 2022);

	cout << date.getDay() << endl;

	cout << date.getMonth() << endl;

	cout << date.getYear() << endl;

	date.addDays(10); // przesuwa o podaną liczbę dni, może być ujemne przesunięcie

	date.set(5, 12, 1901); // ustawia nową datę dla o obiektu

	cout << date.toString() << endl; // wydrukuje napis 05.12.1901

	cout << date.toXML() << endl; // wydrukuje napis <Date day="5" month="12" year="1901"/>

	date.set(30, 2, 2022); // podanie niepoprawnych danych powoduje brak zmiany stanu obiektu i zwrócenie false


}
