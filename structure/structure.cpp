#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

////struct DB {
////    int date, mon, year;
////    string day, leap;
////};
//
//typedef struct {
//    int date, mon, year;
//    string day, leap;
//} DB;
//
//int main()
//{
//    cout << "Structure\n";
//    DB user = {26, 01, 2025, "Sunday", "not leap"};
//    DB* ptr = &user;
//    cout << (*ptr).date << ' ' << (*ptr).mon << ' ' << ptr->year << ' ' << ptr->day << ' ' << ptr->leap;
//    DB arr[10];
//    //cout << user.date << '\\' << user.mon << '\\' << user.year << '-' << user.day << ' ' << user.leap << endl;
//    //DB player;
//    //cin >> player.date >> player.mon >> player.year >> player.day;
//    //getline(cin, player.leap);
//    //cin.ignore();

//typedef struct {
//	string kind, breed, nickname;
//} Animal;
//
//void fill (Animal &a) {
//	cout << "Enter kind: ";
//	getline(cin, a.kind);
//	cout << "Enter breed: ";
//	getline(cin, a.breed);
//	cout << "Enter name: ";
//	getline(cin, a.nickname);
//}
//
//void isvoice(string &voice) {
//	cout << "Can this animal make sound? ";
//	cin >> voice;
//}
//
//void fastType(int amnt, char sym) {
//	for (int i = 0; i < amnt; ++i) cout << sym;
//	cout << endl;
//}
//
////void sound(Animal a) {
////	if (a.kind == "cat") cout << "meow";
////	else if (a.kind == "dog") cout << "bark";
////	else if (a.kind == "lion") cout << "roar";
////	else if (a.kind == "horse") cout << "neigh";
////	else cout << "nothing";
////}
//
//void description(Animal& a, string &voice) {
//	int len = 53;
//
//	fastType(len, '-');
//	cout << "| " << left << setw(10) << a.kind << " | " << setw(10) << a.breed << " | " << setw(10) << a.nickname << " | " << setw(10) << voice << setw(10)<<" |";
//	cout << endl;
//}
//
//int main() {
//	int i = 0, cont=1;
//	const int size = 100;
//	Animal animals[size];
//	string voices[size];
//	while(cont==1){
//		cout << "Input info about " << i + 1 << " animal:" << endl;
//		fill(animals[i]);
//		isvoice(voices[i]);
//		//if (animals[i].kind.empty()) {
//		//	cin.ignore();
//		//	break;
//		//}
//		++i;
//		cout << "Do you want to continue? 0-no/1-yes" << endl;
//		cin >> cont;
//		cin.ignore();
//	}
//	cout << "Animal's info: " << endl;
//	for(int j =0; j<i; ++j) description(animals[j], voices[j]);
//	fastType(53, '-');
//	return 0;
//}


//typedef struct {
//	int ads, per;
//	float money;
//} Site;
//
//void fill(Site& info) {
//	cout << "Enter site's data: " << endl;
//	cout << "Enter amount of advertisements: ";
//	cin >> info.ads;
//	cout << "Enter percent of people who clicked: ";
//	cin >> info.per;
//	cout << "Enter how much money site makes per click: ";
//	cin >> info.money;
//
//}
//
//void show(Site& info) {
//	int clicks = info.ads * info.per / 100;
//	cout << "Out of " << info.ads << " advertisements shown, " << clicks << " users clicked. " << "Per each click site made " << info.money << "$" << ". This means site made " << clicks * info.money << "$ this day.";
//}
//
//int main() {
//	Site info;
//	fill(info);
//	show(info);
//}
//
//	


//typedef struct {
//	string name;
//	int guarantee;
//	float price;
//} Monitor;
//
//void fill (Monitor &monitor) {
//	cout << "Enter name: ";
//	getline(cin, monitor.name);
//	cout << "Enter guarantee (months left): ";
//	cin >> monitor.guarantee;
//	cout << "Enter price: ";
//	cin >> monitor.price;
//	cin.ignore();
//}
//
//void sortM (vector<Monitor>&mon) {
//	for (int i = 0; i < mon.size(); ++i) {
//		for (int j = 0; j < mon.size()-1; ++j) {
//			if (mon[j].price > mon[j + 1].price) swap(mon[j], mon[j + 1]);
//		}
//	}
//}
//
//int main() {
//	int i = 0;
//	char cont = '+';
//	vector<Monitor> mon;
//	do {
//		Monitor m;
//		fill(m);
//		mon.push_back(m);
//		cout << "Do you have monitors yet? +/-";
//		cin >> cont;
//		cin.ignore();
//	} while (cont == '+');
//}


//typedef struct {
//	bool trueOOP;
//	bool multitask;
//} Task;
//
//struct Lang {
//	string name;
//	int year;
//	string author;
//	Task object;
//};
//
//typedef struct {
//	Lang mas[3];
//}ArLang;
//
//int main() {
//	ArLang language;
//	language.mas[0] = { "C++", 1983, "Stroustrup", {true, true} };
//	language.mas[1].name = "C";
//	language.mas[1].author = "Ritchie";
//	language.mas[1].year = 1972;
//	language.mas[1].object.multitask = true;
//	language.mas[1].object.trueOOP = false;
//	cout << "Enter info about Python: (name -> year creation -> author -> has OOP or not -> has multitask or not)" << endl;
//	cin >> language.mas[2].name;
//	cin >> language.mas[2].year;
//	cin.ignore();
//	getline(cin, language.mas[2].author);
//	cin >> language.mas[2].object.trueOOP;
//	cin >> language.mas[2].object.multitask;
//	cin.ignore();
//	for (int i = 0; i < 3; ++i) {
//		cout << language.mas[i].name << ' ' << language.mas[i].year << ' ' << language.mas[i].author << ' ' << language.mas[i].object.trueOOP << ' ' << language.mas[i].object.multitask << endl;
//	}
//	return 0;
//}

typedef struct {
	string name, director, genre;
	float rating, price;
} Disk;

int main() {
	Disk mas[50];
	cout << "Add film - 1\nShow all films - 2\nSearch film by name - 3\nSearch films by genre - 4\nMost popular film - 5\nYour choice: ";
	
	return 0;
}