#include <string>
#include <iostream>

char upper(char& c)
{
	c = ::toupper(c);
	return c;
}

char lower(char& c)
{
	c = ::tolower(c);
	return c;
}

char is_a(char c)
{
	return ::tolower(c) == 'a';
}

char is_d(char c)
{
	return ::tolower(c) == 'd';
}

char is_y(char c)
{
	return ::tolower(c) == 'y';
}

bool is_cap_d(char c)
{
	return c == 'D';
}


/**
 * 1. First letter must be capitalized
 * 2. The word "day" should be capitalized
 * 3. All other letters must be lowercase
 */
std::string normalize(std::string str) {
	int 	 d_start_idx{}, delta{}; bool handling{false};
	size_t size = str.size();
	if (size)
	{
		upper(str.front());
		if (size > 1)
		{
		  for (int i = 1; i < size; i++)
		  {
				char& c = str.at(i);
			  if ((i + 1) != size && is_d(c) && is_a(str[i + 1]))
				{
					if (handling)
				    lower(str.at((i - 1)));
					upper(c);
					handling = true;
					d_start_idx  = i;
				}
				else
				if (handling)
				{
					delta = (i - d_start_idx);
					if (delta == 1)
					{
						if (is_a(c))
							upper(c);
						else
						{
							lower(str[i - 1]);
							handling = false;
						}
					}
					if (delta == 2)
					{
						if (is_y(c))
							upper(c);
						else
						{
							lower(str[i - 1]);
							lower(str[i - 2]);
						}
						handling = false;
					}
				}
				else
					lower(c);
		  }
		}
	}
	return str;
}

int main()
{
	std::cout << normalize("ddddddkhfkjsdfhka ajhdlkjsadhLKSDH KLJSAD  dasdy day DAY day dddddddddddddddddddddddaydddddddddddd") << std::endl;

	std::cout << normalize("ddddddddddddddddddddayy") << std::endl;

	std::cout << normalize("There comes a time when the day of days is a day's away from the days of the day") << std::endl;
}
