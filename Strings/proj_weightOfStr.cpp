#include <bits/stdc++.h>
#include <string.h>
using namespace std;
char lowerArr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char upperArr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void comparison(string s1, int vowel) {
	int result=0;
	for (int i = 0; i < s1.length() ; ++i)
	{
		if(s1[i]==' ')
			continue;
		if(vowel)
		{
			for (int l = 0; l < 26; ++l)
			{
				if(s1[i] == lowerArr[l] || s1[i] == upperArr[l])
				{
					result+=(l+1);
				}
			}
		}
		else {
			if(s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U' || s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
				continue;
			else {
				for (int l = 0; l < 26; ++l)
				{
					if(s1[i] == lowerArr[l] || s1[i] == upperArr[l])
					{
						result+=(l+1);
					}
				}
			}
		}
	}
	cout<<result<<endl;
}

int main() {
	string s1; int vowel;
	cout<<"Enter string: ";getline(cin, s1);
	cout<<"Count vowels also (1/0): ";cin>>vowel;
	comparison(s1, vowel);
	
	return 0;
}