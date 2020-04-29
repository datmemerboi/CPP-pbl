#include <bits/stdc++.h>
using namespace std;
void WriteStory(){
	// ofstream out;
	FILE *fp = fopen("story.txt", "w");
	char ch;
	while( (ch=getchar()) != EOF){
		fputc(ch, fp);
	}
	fclose(fp);
}
void ReadStory() {
	FILE *fp = fopen("story.txt", "r");
	char data[30];
	fgets(data, 30, fp);
	fclose(fp);
	cout<<data<<endl;
}
void AddNames() {
	return;
}

int main() {
	cout<<"===================="<<endl;
	cout<<"---	Main Menu	---"<<endl;
	cout<<"===================="<<endl;
	cout<<"1.Write story\n2.Read story using fgetc\n3.Add names\n4.Read story using fgets\n5.Exit"<<endl;
	int option;
	cout<<"Enter option (1-5):";cin>>option;

	switch(option){
		case 1:
			WriteStory(); break;
		case 2:
			ReadStory(); break;
		case 3:
			AddNames(); break;
		case 5:
			return 0;
	}
	return 0;
}