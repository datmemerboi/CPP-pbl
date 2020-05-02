#include <bits/stdc++.h>
using namespace std;

class Book {
private:
	int BOOK_NO; char BOOKTITLE[20]; float PRICE;
	float total_cost(int n) {
		return (n * this->PRICE);
	};
public:
	void input(int n, char t[20], float p) {
		BOOK_NO = n; PRICE = p;
		for (int i = 0; i < 20; ++i)
		{
			BOOKTITLE[i] = t[i];
		}
	};
	void purchase(){
		int num;
		cout<<"Enter number of copies: ";cin>>num;
		float cost = total_cost(num);
		cout<<"Total amount to be paid: "<<cost<<endl;
	};
	void Display() {
		cout<<this->BOOK_NO<<" | "<<this->BOOKTITLE<<" | "<<this->PRICE<<endl;
	};
};

int main() {
	Book starfaults;
	starfaults.input(1137, "Fault in stars", 150.00);
	starfaults.Display();

	Book paper;
	paper.input(1143, "Paper Town", 148.00);
	paper.Display();

	starfaults.purchase();
	cout<<endl;
	paper.purchase();
	
	return 0;
}