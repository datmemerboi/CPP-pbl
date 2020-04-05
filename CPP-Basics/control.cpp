#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	unsigned int time;
	cout<<"Enter time in seconds: ";cin>>time;
	int h,m,s;
	h = time/3600;
	m = (time/60)-(h*60);
	s = time-(h*3600)-(m*60);
	cout<<"Time is "<<h<<" hrs "<<m<<" mins "<<s<<" secs"<<endl;

	int num,i;
	int power=1,final=0;
	cout<<"Enter a num for increment: ";cin>>num;
	while(num>0){
		i = ( ( num%10 ) +1 )%10;
		final+= ( (power)*i );
		power*=10;	
		num/=10;
	}
	cout<<final<<endl;

	cout<<"Enter number to check if +ve or -ve: "; cin>>num;
	if(num==0){
		cout<<"0 is neither positive nor negative";
	}
	else{
		num>0? cout<<num<<" is positive"<<endl : cout<<num<<" is negative number"<<endl;
	}
	int rev=0;
	cout<<"Enter number to reverse: "; cin>>num;
	while(num>0){
		rev *=10;
		rev += (num%10);
		num/=10;
	}
	cout<<rev<<endl;

	int count=0;
	int l, r, k;
	cout<<"Enter l r k: ";cin>>l>>r>>k;
	if(l>r || 1>l || r>1000 || k>1000){
		cout<<"Numbers do not follow contrains"<<endl;
	}
	else{
		for (int i = l; i <= r; ++i)
		{
			if(i%k==0){count++; }
		}
		cout<<count<<endl;
	}

	cout << "Enter int to check prime: "; cin >> num;
	if(num==0 || num==1){
		cout<<num<<" is neither prime nor composite"<<endl;
	}
	else{
		bool isPrime = true;
		for(i = 2; i <= num / 2; ++i)
		{
			if(num % i == 0)
			{
				isPrime = false; break;
			}
		}
		if (isPrime)
			cout << num <<" is a prime number"<<endl;
		else
			cout << num <<" is not a prime number"<<endl;
	}

	int digit; rev = 0;

	cout << "Enter a int to check palindrome: ";cin >> num;
	int copy = num;

	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);

	if (copy == rev)
		cout <<copy<< " is a palindrome"<<endl;
	else
		cout <<copy<< " is not a palindrome"<<endl;

	int sum=0;
	cout<<"Enter int for digit sum: ";cin>>num;
	copy = num;
	while(num>0){
		sum+=(num%10);
		num/=10;
	}
	cout<<"Sum of digits of "<<copy<<" is "<<sum<<endl;

	int factorial = 1;
	cout<<"Enter int for factorial: ";cin>>num;
	copy = num;
	do{
		factorial*=num;
		--num;
	}while(num>1);
	cout<<"Factorial of "<<copy<<" is "<<factorial<<endl;

	cout<<"Enter int for pattern: ";cin>>num;
	int starNum = 1;
	while(num>0){
		for (int i = 0; i < starNum; ++i)
		{
			cout<<"*";
		}
		cout<<endl;
		starNum+=2;
		num--;
	}
	char stars;
	cout<<"Enter int and char for pattern: ";cin>>num>>stars;
	starNum = 1;
	while(num>0){
		for (int i = 0; i < starNum; ++i)
		{
			cout<<stars;
		}
		cout<<endl;
		starNum+=2;
		num--;
	}
	return 0;
}