// incomplete
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s;
    std::cin >> s;
    char del = '-';
    std::string t;
    std::vector<std::string> vec;
    for(int i=0; i < s.length(); i++)
    {
	if (s[i] == '-')
	{
	    std::string temp;
	    for(int j=0; j < i; i++)
	    {
		temp.push_back(s[j]);
	    }
	    vec.push_back(temp);
	}
    }
    for(std::string sss: vec)
	t.push_back(sss[0]);
    std::cout << t;
    return 0;
}
