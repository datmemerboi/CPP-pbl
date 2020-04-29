#include <bits/stdc++.h>
using namespace std;

void GetVowelCount(char word[]){
	int count = 0;
	for (int i = 0; i < strlen(word); ++i)
	{
		if( word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
			++count;
	}
	if( count>2 ){
		cout<<word<<"\t--"<<count<<endl;
	}
}

int main()
{
	char input[100];
	while(1){
		cin>>input;
		GetVowelCount(input);
	}
}