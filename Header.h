#pragma once
#include<fstream>
namespace Конвертер
{
	using namespace std;

	class Velich
	{
	private:
		double value;
		char* razmern;
	public:
		double getValue()
		{
			return value;
		}
		virtual double getKoef(char* name)
		{
			char* s1 = new char[32], *s2 = new char[32];
			double k;
			ifstream fin("file1.txt");
			while (!fin.eof())
			{
				fin >> s1 >> s2 >> k;
				if ((*s1 == *razmern) && (*s2 == *name))
					return k;
			}
			return 0;
		};
		Velich()
		{};
		Velich(double num, char* name)
		{
			value = num;
			razmern = name;
		}
	};
	class IKonverter
	{
	public:
		virtual long double Perevod(char* ResultName)
		{
			return 0;
		};
	};
	class Konverter : public IKonverter
	{
	private:
		Velich StartValue;
		Velich FinishValue;
		void Konvert(char* ResultName)
		{
			long double x = StartValue.getValue() * StartValue.getKoef(ResultName);
			FinishValue = Velich(x, ResultName);
		}
		double GetResult()
		{
			return FinishValue.getValue();
		}
	public:
		long double Perevod(char* ResultName)
		{
			Konvert(ResultName);
			return GetResult();
		}
		Konverter(Velich vel)
		{
			StartValue = vel;
		}
	};
}