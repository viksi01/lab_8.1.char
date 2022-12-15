#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* s)
{
	int k = 0,
		pos = 0;
	char* t;
	while (t = strchr(s + pos, 'a'))

	{
		pos = t - s + 1;
		if (((s[pos - 1] == 'a' || s[pos - 1] == 'b' || s[pos - 1] == 'c')) && ((s[pos] == 'a' || s[pos] == 'b' || s[pos] == 'c'))
			&& ((s[pos + 1] == 'a' || s[pos + 1] == 'b' || s[pos + 1] == 'c')))
			k++;
	}

	pos = 0;

	while (t = strchr(s + pos, 'b'))

	{
		pos = t - s + 1;
		if (((s[pos - 1] == 'a' || s[pos - 1] == 'b' || s[pos - 1] == 'c')) && ((s[pos] == 'a' || s[pos] == 'b' || s[pos] == 'c'))
			&& ((s[pos + 1] == 'a' || s[pos + 1] == 'b' || s[pos + 1] == 'c')))
			k++;
	}
	
	pos = 0;

	while (t = strchr(s + pos, 'c'))

	{
		pos = t - s + 1;
		if (((s[pos - 1] == 'a' || s[pos - 1] == 'b' || s[pos - 1] == 'c')) && ((s[pos] == 'a' || s[pos] == 'b' || s[pos] == 'c'))
			&& ((s[pos + 1] == 'a' || s[pos + 1] == 'b' || s[pos + 1] == 'c')))
			k++;
	}
	

	return k;
}

char* Change(char* s)
{
	char* t = new char[strlen(s) + 1];
	char* p;
	int pos1 = 0, pos2 = 0;
	*t = 0;

	while (p = strchr(s + pos1, 'a'))
	{
		if ((s[p - s + 1] == 'a' || s[p - s + 1] == 'b' || s[p - s + 1] == 'c'))
			if ((s[p - s + 2] == 'a' || s[p - s + 2] == 'b' || s[p - s + 2] == 'c'))
			{
				pos2 = p - s + 3;
				strncat_s(t,101, s + pos1, pos2 - pos1 - 3);
				strcat_s(t,101, "**");
				pos1 = pos2;
			}


		while (p = strchr(s + pos1, 'b'))
		{
			if ((s[p - s + 1] == 'a' || s[p - s + 1] == 'b' || s[p - s + 1] == 'c'))
				if ((s[p - s + 2] == 'a' || s[p - s + 2] == 'b' || s[p - s + 2] == 'c'))
				{
					pos2 = p - s + 3;
					strncat_s(t,101, s + pos1, pos2 - pos1 - 3);
					strcat_s(t,101, "**");
					pos1 = pos2;
				}


			while (p = strchr(s + pos1, 'c'))
			{
				if ((s[p - s + 1] == 'a' || s[p - s + 1] == 'b' || s[p - s + 1] == 'c'))
					if ((s[p - s + 2] == 'a' || s[p - s + 2] == 'b' || s[p - s + 2] == 'c'))
					{
						pos2 = p - s + 3;
						strncat_s(t,101, s + pos1, pos2 - pos1 - 3);
						strcat_s(t,101, "**");
						pos1 = pos2;
					}
			}
		}
	}
	
		strcat_s(t,101, s + pos1);
		strcpy_s(s,101, t);
	    return t;
}


int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str) << " groups of 'a', 'b', 'c'" << endl;
	char* dest = new char[151];
	cout << "Modified string (param) : " << str << endl;
	dest = Change(str);
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
