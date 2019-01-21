#include<iostream>
#include<string>
using namespace std;
class Person {
public:
	int Id;
	string fn, ln, branch;
	void aptPerson() {
		cout << "Enter Id" << endl;
		cin >> Id;
		cout << "Enter FirstName" << endl;
		cin >> fn;
		cout << "Enter LastName" << endl;
		cin >> ln;
		cout << "Enter Branch" << endl;
		cin >> branch;
		cout << endl;
	}
	void showPerson() {
		cout << "Id: " << Id << " FirstName: " << fn << " LastName: " << ln << " Branch: " << branch << endl;
	}
};
class UgStudent :public Person {
public:
	string UG_Group;
	void  assignGroup(string m) {
		UG_Group = m;
	}
	void printGroup() {
		cout << UG_Group << endl;
	}
};
class Sports {
public:
	string sportName;
	void assignSportName(string sp) {
		sportName = sp;
	}
	void printSport() {
		cout << sportName << endl;
	}
};
class PGStudent : public UgStudent, public Sports {
public:
	string PG_Group;
};
int main() {
	PGStudent p[25];
	p[0].Id = 1001;
	p[0].fn = "sandy";
	p[0].ln = "shobi";
	p[0].branch = "cse";
	p[1].Id = 1002;
	p[1].fn = "san";
	p[1].ln = "sho";
	p[1].branch = "ece";
	p[2].Id = 1003;
	p[2].fn = "sand";
	p[2].ln = "shobitha";
	p[2].branch = "eee";
	int choice, sid;
	int pos = 3;
	string n2, n3, n4;
	int count = 0;
	do {
		cout << "\n1.Enter 1 to add person details\n2.Enter 2 to display data from array\n3.Enter 3 to search data\n4.Enter 4 to update details\n5.Enter 5 to delete details" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			p[pos].aptPerson();
			pos++;
			break;
		case 2:
			for (int k = 0; k < pos; k++) {
				p[k].showPerson();
			}
			break;
		case 3:
			cout << "Enter id to search" << endl;
			cin >> sid;
			for (int l = 0; l < pos; l++) {
				if (p[l].Id == sid) {
					p[l].showPerson();
				}
			}
			break;
		case 4:
			cout << "Enter id to update details" << endl;
			cin >> sid;
			for (int l = 0; l < pos; l++) {
				if (p[l].Id == sid) {
					p[l].showPerson();
					cout << "-----------update details----------" << endl;
					cout << "Enter firstname :";
					cin >> n2;
					cout << "Enter lastname :";
					cin >> n3;
					cout << "Enter branch:";
					cin >> n4;
					p[l].fn = n2;
					p[l].ln = n3;
					p[l].branch = n4;
					cout << "Updated details";
					p[l].showPerson();
				}
			}
			break;
		case 5:
			cout << "Enter id to delete" << endl;
			cin >> sid;
			
			for (int l = 0; l < pos; l++)
			{
				if (p[l].Id == sid)
				{
					count++;
					for (int j = l; j < (pos - 1); j++)
					{
						p[j] = p[j + 1];
					}
					pos--;
					cout << "successfully deleted" << endl;
				}
				
			}
			if (count == 0)
				cout << "ID not found";
			break;
		default:
			break;
		}
		}while (choice < 6);
		return 0;
	}

