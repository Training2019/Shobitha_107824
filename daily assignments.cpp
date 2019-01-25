//pattern - 1

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			cout << i;
//		}
//		cout << endl;
//	}
//}

//pattern - 2

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, k = 1;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			cout << k << " ";
//			k++;
//
//		}
//
//		cout << endl;
//	}
//}

//pattern - 3

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, s;
//	cin >> s;
//	int r = s + 1;
//	for (i = 1; i < r; i++)
//	{
//		for (j = 1; j <= s; j++)
//		{
//			cout << " ";
//		}
//		for (j = 1; j <= i; j++)
//		{
//			cout << "*";
//			cout << " ";
//		}
//		cout << endl;
//		s--;
//	}
//
//	return 0;
//}

//print sum of even and odd numbers in the given 1-n value num=100

//#include<iostream>
//using namespace std;
//int main()
//{
//
//	int i, num = 100, esum = 0, osum = 0;
//	for (i = 1; i < num; i++)
//	{
//		if (i % 2 == 0)
//		{
//			esum = esum + i;
//		}
//		else
//		{
//			osum = osum + i;
//		}
//	}
//	cout << "sum of even numbers = " << esum << endl;
//	cout << "sum of odd numbers = " << osum << endl;
//	cout << "sum of even and odd = " << esum + osum;
//}

//check the given number is divisible by 15 0r not

//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout << "enter a number : ";
//	cin >> num;
//	if (num % 15 == 0)
//	{
//		cout << num << " - number is is divisible by 15";
//
//	}
//	else
//	{
//		cout << num << " - number is not divisible by 15";
//	}
//}

//print all numbers divisible by 15 b/w 1-100

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 15 == 0)
//		{
//			cout << i;
//			cout << endl;
//		}
//
//	}
//}

//sum of digits of a given number

//#include<iostream>
//using namespace std;
//int main()
//{
//	int num, c = 0, sum = 0, r;
//	cin >> num;
//	int k = num;
//	while (num != 0)
//	{
//		num = num / 10;
//		c++;
//	}
//	if (c >= 5)
//	{
//		while (k != 0)
//		{
//			r = k % 10;
//			sum = sum + r;
//			k = k / 10;
//		}
//		cout << sum;
//	}
//	else
//	{
//		cout << "integer should not be less than 5 digits";
//	}
//}

//print the pattern

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, k = 2, c = 0, num;
//	cout << "enter the number = ";
//	cin >> num;
//	for (i = 1; i <= num; i += 2)
//	{
//		cout << i << "\t";
//		c++;
//		if (c == 3)
//		{
//			for (j = k; j < k + 5; j += 2)
//			{
//				cout << j << "\t";
//			}
//
//			c = 0;
//			k = j;
//		}
//	}
//
//}

//perfect number or not

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, sum;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				sum += j;
//			}
//		}
//
//		if (sum == i)
//		{
//			cout << i << endl;
//		}
//	}
//
//}

//armstrong number

//#include<iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i < 1000; i++)
//	{
//		int t = i, sum = 0;
//		while (t > 0)
//		{
//			int r;
//			r = t % 10;
//			sum = sum + (r*r*r);
//			t = t / 10;
//
//		}
//		if (i == sum)
//		{
//			cout << i << " ";
//		}
//	}
//	return 0;
//
//}

//number of occurences of a given numbers

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[100];
//	int i, n;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j])
//			{
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//
//	}
//	for (i = 0; i < n; i++)
//	{
//		int c = 0;
//		for (int j = i; j < n; j++)
//		{
//			if (a[i] == a[j])
//			{
//				c++;
//			}
//			else
//			{
//				i = j - 1;
//				break;
//			}
//		}
//		cout << a[i] << "-" << c << endl;
//		if (i + c == n)
//		{
//			break;
//		}
//	}
//
//}

// fibonacci series

//#include <iostream>
//using namespace std;
//int main()
//{
//	int i, n, t1 = 0, t2 = 1, nextterm;
//
//	cout<<"enter the number of terms: ";
//	cin >> n;
//
//	printf("fibonacci series: ");
//
//	for (i = 1; i <= n; ++i)
//	{
//		cout << t1;
//		nextterm = t1 + t2;
//		t1 = t2;
//		t2 = nextterm;
//	}
//}

//given number is power of 10 or not

//#include<iostream>
//using namespace std;
//void pow(int x, int y)
//{
//	int p = 1;
//	while (p < y)
//	{
//		p = p * x;
//	}
//	if (p == y)
//	{
//		cout << "true";
//	}
//	else
//	{
//		cout << "false";
//	}
//}
//
//int main()
//{
//	int x = 10, y;
//	cin >> y;
//	pow(x, y);
//	return 0;
//}


// pascal traingle

//#include<iostream>
//using namespace std;
//int main()
//{
//	int rows;
//	cout << "enter the number of rows : ";
//	cin >> rows;
//	cout << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		int val = 1;
//		for (int j = 1; j < (rows - i); j++)
//		{
//			cout << "  ";
//		}
//		for (int k = 0; k <= i; k++)
//		{
//			cout << "    " << val;
//			val = val * (i - k) / (k + 1);
//		}
//		cout << endl << endl;
//	}
//	cout << endl;
//	return 0;
//}



//=======================================================================


// storage classes

//#include<iostream>
//using namespace std;
//#define company_name "capgemini";
//#define company_id 1001;
//const float pi = 3.14f;
//void funct() {
//	static int count;
//	int num = 100;
//	count++;
//	num++;
//	cout << "count:" << count << endl;
//	cout << "num:" << num << endl;
//	cout << "pi:" << pi << endl;
//	cout << "company name:" << company_name;
//	cout << "company id:" << company_id;
//}
//int main()
//
//{
//	funct();
//	cout << "_______________\n";
//	funct();
//	cout << "________________\n";
//	funct();
//	cout << "________________\n";
//	funct();
//	
//}

//pointers

//#include<iostream>
//using namespace std;
//int* assignarray(int arr[]) {
//	arr[0] = 10;
//	arr[1] = 11;
//	arr[2] = 22;
//	return arr;
//}
//int main()
//{
//	int *ptr;
//	int myarr[5];
//	ptr=assignarray(myarr);
//	cout << ptr << endl; 
//	cout << &ptr << endl;
// for (int i = 0; i < 3; i++)
//cout << *ptr + i << "\t";
//	cout << endl;
//	return 0;
//}


//string
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch = 'a';
//	char name[20] = "tom";
//	cout << name << endl;
//	return 0;
//}

//enum

//#include<iostream>
//using namespace std;
//enum weekday {
//	sun,mon,tue,wed,thr,fri,sat
//};
//int main()
//{
//	weekday day = sun;
//	cout << "weekday:" << weekday::tue;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//enum weekday {
//	sun, mon, tue, wed, thr, fri, sat
//};
//int main()
//{
//	weekday day= sat;
//	switch (day)
//	{
//	case sun:
//		cout << "sunday holiday";
//		break;
//	case mon:
//		break;
//	case tue:
//	    break;
//	case wed:
//		break;
//	case thr:
//		break;
//	case fri:
//		break;
//	default:
//		cout << "saturday holiday";
//		break;
//	}
//    return 0;
//}

//// classes and objects

//#include<iostream>
//using namespace std;
//extern class student {
//public:
//	int studno;
//	char studname[25];
//	void getstudents()
//	{
//		cout << "enter student number:";
//		cin >> studno;
//		cout << "enter student name:";
//		cin >> studname;
//	}
//	void printstudents() {
//		cout << endl << studno << endl << studname;
//	}
//};
//
//int main()
//{
//	student s;
//	s.getstudents();
//	s.printstudents();
//
//	student tom;
//	tom.studno = 1009;
//	strcpy_s(tom.studname, "tom jerry");
//	tom.printstudents();
//
//}

// function overloading-to achieve dynamic polymorphism

//#include<iostream>
//using namespace std;
//int add(int num1, int num2)
//{
//	return num1 + num2;
//}
//float add(float num1, float num2)
//{
//	return num1 / num2;
//}
//int main()
//{
//	cout << add(5, 8) << endl;
//	cout << add(5.67f, 4.77f) << endl;
//	return 0;
//}




					  //assignments
//1.program - accept,print,sort array elements


//#include<iostream>
//using namespace std;
//int main()
//{
// int i,j,arr[5],temp;
// int *ptr = arr;
// cout << "enter the elements of an array : ";
// for (i = 0; i < 5; i++)
// {
// cin >> arr[i];
// }
// cout << "after insertion the array elements are : " << endl;
// for (i = 0; i < 5; i++)
// {
// cout << *(ptr + i)<<"\t";
//  }
// cout << endl<<"after sorting the elements of an array are : "<<endl;
// for (i = 0; i < 5; i++)
// {
// for (j = i + 1; j < 5; j++)
// {
// if (*(ptr + j) < *(ptr + i))
// {
// temp = *(ptr + j);
// *(ptr + j) = *(ptr + i);
// *(ptr + i) = temp;
// }
// }
// }
// for (i = 0; i < 5; i++)
// {
// cout << *(ptr + i) <<"\t";
// }
// return 0;
//}

//3.program - anagram or not

//#include<iostream>
//using namespace std;
//void agm(char st1[], char st2[])
//{
//	int i, flag = 0, x[26] = { 0 }, y[26] = { 0 };
//	for (i = 0; st1[i] != '\0'; i++)
//		x[st1[i] - 'a']++;
//	for (i = 0; st2[i] != '\0'; i++)
//		y[st2[i] - 'a']++;
//	for (i = 0; i < 26; i++)
//	{
//		if (x[i] != y[i])
//			flag = 1;
//	}
//	if (flag == 1)
//		cout << "strings are not anagrams";
//	else
//		cout << "strings are anagrams.";
//}
//
//int main()
//{
//	char st1[20], st2[20];
//	cout << "enter string 1 : ";
//	cin>>st1;
//	cout << "enter string 2 : ";
//	cin >> st2;
//	agm(st1, st2);
//	return 0;
//}

//4.program - panagram or not

//#include<iostream>
//using namespace std;
//int main()
//{
//	char s[100];
//	int i, x[26] = { 0 }, t = 0;
//	cout<<" enter the string:";
//	cin >> s;
//
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if ('a' <= s[i] && s[i] <= 'z')
//		{
//			t =t+ !x[s[i] - 'a'];
//			x[s[i] - 'a'] = 1;
//		}
//		else if ('a' <= s[i] && s[i] <= 'z')
//		{
//			t =t+!x[s[i] - 'a'];
//			x[s[i] - 'a'] = 1;
//		}
//	}
//
//	if (t== 26)
//	{
//		printf("\n the entered string is a pangram string.");
//	}
//	else
//	{
//		printf("\n the entered string is not a pangram string.");
//	}
//}

//program - 5 print the first character of the given character index

//#include<iostream>
//using namespace std;
//int main()
//{
//	char str[20], c;
//	int i, n;
//	cout << "enter number of characters of a string : ";
//	cin >> n;
//	cout << "enter the string : ";
//	cin >> str;
//	cout << "enter the character : ";
//	cin >> c;
//	for (i = 0; i < n; i++)
//	{
//		if (str[i] == c)
//		{
//			cout << i;
//			break;
//		}
//
//	}
//	return 0;
//}

//program - 6 print the last character of the given character index

//#include<iostream>
//using namespace std;
//int main()
//{
//	char str[20],c;
//	int i,n,u=0;
//	cout << "enter number of characters of a string : ";
//	cin >> n;
//	cout << "enter the string : ";
//	cin >> str;
//	cout << "enter the character : ";
//	cin >> c;
//	for (i = 0; i<n; i++)
//	{
//		if (str[i] == c)
//		{
//			u=i;
//		}
//
//	}
//	cout << u;
//	return 0;
//}


//constructors and structures

//#include<iostream>
//#include<string>
//using namespace std;
//struct student {
//	int sno;
//	char firstname[50], lastname[50];
//	int c, cpp, java, total;
//	float avg;
//};
//int main()
//{
//	student s[50];
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		cout << "student number : ";
//		cin >> s[i].sno;
//		cout << "first name : ";
//		cin >> s[i].firstname;
//		cout << "last name : ";
//		cin >> s[i].lastname;
//		cout << "marks in c : ";
//		cin >> s[i].c;
//		cout << "marks in cpp : ";
//		cin >> s[i].cpp;
//		cout << "marks in java : ";
//		cin >> s[i].java;
//
//	}
//	for (i = 0; i < 3 ; i++)
//	{
//		s[i].total = s[i].c + s[i].cpp + s[i].java;
//		s[i].avg = (s[i].total) / 3;
//	}
//
//	cout << "sno" << "\t" << "firstname" << "\t" << "lastname" << "\t" << "c" << "\t" << "cpp" << "\t" << "java" << "\t" << "total" << "\t" << "avg" << endl;
//	for (i = 0; i < 3; i++)
//	{
//		cout << s[i].sno << "\t";
//		cout << s[i].firstname << "\t"<<"\t";
//		cout << s[i].lastname << "\t"<<"\t";
//		cout << s[i].c << "\t";
//		cout << s[i].cpp << "\t";
//		cout << s[i].java << "\t";
//		cout << s[i].total << "\t";
//		cout << s[i].avg << endl;
//	}
//	cout << endl;
//	cout << "after sorting :" << endl;
//	int temp[50],j;
//	for (i = 0; i < 3; i++)
//	{
//			temp[i] = s[i].avg;
//
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (temp[i] > temp[j])
//			{
//				int t = temp[i];
//				temp[i] = temp[j];
//				temp[j] = t;
//			}
//		}
//	}
//	cout << "sno" << "\t" << "firstname" << "\t" << "lastname" << "\t" << "c" << "\t" << "cpp" << "\t" << "java" << "\t" << "total" << "\t" << "avg" << endl;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (temp[i] ==s[j].avg)
//			{
//				cout << s[j].sno << "\t";
//				cout << s[j].firstname << "\t"<<"\t";
//				cout << s[j].lastname << "\t"<<"\t";
//				cout << s[j].c << "\t";
//				cout << s[j].cpp << "\t";
//				cout << s[j].java << "\t";
//				cout << s[j].total << "\t";
//				cout << s[j].avg << endl;
//			}
//		}
//	}
//}

//PATTERN - 1

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			cout << i;
//		}
//		cout << endl;
//	}
//}

//PATTERN - 2

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, k = 1;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			cout << k << " ";
//			k++;
//
//		}
//
//		cout << endl;
//	}
//}

//PATTERN - 3

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, s;
//	cin >> s;
//	int r = s + 1;
//	for (i = 1; i < r; i++)
//	{
//		for (j = 1; j <= s; j++)
//		{
//			cout << " ";
//		}
//		for (j = 1; j <= i; j++)
//		{
//			cout << "*";
//			cout << " ";
//		}
//		cout << endl;
//		s--;
//	}
//
//	return 0;
//}

//PRINT SUM OF EVEN AND ODD NUMBERS IN THE GIVEN 1-N VALUE NUM=100

//#include<iostream>
//using namespace std;
//int main()
//{
//
//	int i, num = 100, esum = 0, osum = 0;
//	for (i = 1; i < num; i++)
//	{
//		if (i % 2 == 0)
//		{
//			esum = esum + i;
//		}
//		else
//		{
//			osum = osum + i;
//		}
//	}
//	cout << "sum of even numbers = " << esum << endl;
//	cout << "sum of odd numbers = " << osum << endl;
//	cout << "sum of even and odd = " << esum + osum;
//}

//CHECK THE GIVEN NUMBER IS DIVISIBLE BY 15 0R NOT

//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout << "Enter a number : ";
//	cin >> num;
//	if (num % 15 == 0)
//	{
//		cout << num << " - Number is is divisible by 15";
//
//	}
//	else
//	{
//		cout << num << " - Number is not divisible by 15";
//	}
//}

//PRINT ALL NUMBERS DIVISIBLE BY 15 B/W 1-100

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 15 == 0)
//		{
//			cout << i;
//			cout << endl;
//		}
//
//	}
//}

//SUM OF DIGITS OF A GIVEN NUMBER

//#include<iostream>
//using namespace std;
//int main()
//{
//	int num, c = 0, sum = 0, r;
//	cin >> num;
//	int k = num;
//	while (num != 0)
//	{
//		num = num / 10;
//		c++;
//	}
//	if (c >= 5)
//	{
//		while (k != 0)
//		{
//			r = k % 10;
//			sum = sum + r;
//			k = k / 10;
//		}
//		cout << sum;
//	}
//	else
//	{
//		cout << "integer should not be less than 5 digits";
//	}
//}

//PRINT THE PATTERN

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, k = 2, c = 0, num;
//	cout << "Enter the number = ";
//	cin >> num;
//	for (i = 1; i <= num; i += 2)
//	{
//		cout << i << "\t";
//		c++;
//		if (c == 3)
//		{
//			for (j = k; j < k + 5; j += 2)
//			{
//				cout << j << "\t";
//			}
//
//			c = 0;
//			k = j;
//		}
//	}
//
//}

//PERFECT NUMBER OR NOT

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, sum;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				sum += j;
//			}
//		}
//
//		if (sum == i)
//		{
//			cout << i << endl;
//		}
//	}
//
//}

//ARMSTRONG NUMBER

//#include<iostream>
//using namespace std;
//int main()
//{
//	for (int i = 1; i < 1000; i++)
//	{
//		int t = i, sum = 0;
//		while (t > 0)
//		{
//			int r;
//			r = t % 10;
//			sum = sum + (r*r*r);
//			t = t / 10;
//
//		}
//		if (i == sum)
//		{
//			cout << i << " ";
//		}
//	}
//	return 0;
//
//}

//NUMBER OF OCCURENCES OF A GIVEN NUMBERS

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[100];
//	int i, n;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (a[i] > a[j])
//			{
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//
//	}
//	for (i = 0; i < n; i++)
//	{
//		int c = 0;
//		for (int j = i; j < n; j++)
//		{
//			if (a[i] == a[j])
//			{
//				c++;
//			}
//			else
//			{
//				i = j - 1;
//				break;
//			}
//		}
//		cout << a[i] << "-" << c << endl;
//		if (i + c == n)
//		{
//			break;
//		}
//	}
//
//}

// FIBONACCI SERIES

//#include <iostream>
//using namespace std;
//int main()
//{
//	int i, n, t1 = 0, t2 = 1, nextTerm;
//
//	cout<<"Enter the number of terms: ";
//	cin >> n;
//
//	printf("Fibonacci Series: ");
//
//	for (i = 1; i <= n; ++i)
//	{
//		cout << t1;
//		nextTerm = t1 + t2;
//		t1 = t2;
//		t2 = nextTerm;
//	}
//}

//GIVEN NUMBER IS POWER OF 10 OR NOT

//#include<iostream>
//using namespace std;
//void pow(int x, int y)
//{
//	int p = 1;
//	while (p < y)
//	{
//		p = p * x;
//	}
//	if (p == y)
//	{
//		cout << "true";
//	}
//	else
//	{
//		cout << "false";
//	}
//}
//
//int main()
//{
//	int x = 10, y;
//	cin >> y;
//	pow(x, y);
//	return 0;
//}


// PASCAL TRAINGLE

//#include<iostream>
//using namespace std;
//int main()
//{
//	int rows;
//	cout << "Enter the number of rows : ";
//	cin >> rows;
//	cout << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		int val = 1;
//		for (int j = 1; j < (rows - i); j++)
//		{
//			cout << "  ";
//		}
//		for (int k = 0; k <= i; k++)
//		{
//			cout << "    " << val;
//			val = val * (i - k) / (k + 1);
//		}
//		cout << endl << endl;
//	}
//	cout << endl;
//	return 0;
//}

// Operator overloading

//#include<iostream>
//using namespace std;
//class Rectangle {
//private:
//	float length;
//	float width;
//public:
//	Rectangle() {
//		this->length = 0;
//		this->width = 0;
//	}
//	Rectangle(float len, float wid) {
//		this->length = len;
//		this->width = wid;
//	}
//	Rectangle operator+(Rectangle);
//	void display() {
//		cout << "\nlength" << length << "\nwidth" << width << endl;
//	}
//};
//Rectangle Rectangle::operator+(Rectangle rect) {
//	Rectangle r;
//	r.length = this->length + rect.length;
//	r.width = this->width + rect.width;
//}
//int main() {
//	Rectangle r1(10, 34.5f);
//	Rectangle r2(3.4f, 5.6f);
//	Rectangle r=r1 + r2;
//	r1.display();
//	r2.display();
//	r.display();
////}

//Constructors

//#include<iostream>
//using namespace std;
//const float PI = 3.14f;
//class Circle {
//private:
//	float radius;
//public:
//	Circle() {
//
//	}
//	Circle(float radius)
//	{
//		this->radius = radius;
//	}
//	void calculateArea() {
//		cout << "Circle Area= " << PI * radius*radius << endl;
//	}
//};
//class Traingle {
//private:
//	float height;
//	float width;
//public:
//	Traingle() {
//
//	}
//	Traingle(float height,float width)
//	{
//		this->height = height;
//		this->width = width;
//	}
//	void calculateArea() {
//		cout << "Traingle Area= " << 0.5*height*width << endl;
//	}
//};
//class CircleOnTraingle :public Circle, Traingle {
//public:
//	CircleOnTraingle(float radius) : Circle(radius) {
//	}
//};
//int main() {
//	CircleOnTraingle obj(23.7f);
//	obj.Circle::calculateArea();
//}

//Exception Handling

//#include<iostream>
//using namespace std;
//class InsufficientBalanceException :public exception {
//public:
//	const char* what() const throw() {
//		return "Sorry!Insufficient balance in your account!";
//
//	}
//};
//InsufficientBalanceException e;
//class Account{
//	double balance;
//public:
//	void accept() {
//		try {
//			cout << "Enter your amount";
//			cin >> balance;
//			if (balance < 500)
//				throw e;
//		}
//		catch (InsufficientBalanceException &e) {
//			cout << e.what();
//		}
//	}
//};
//int main() {
//	Account acc;
//	acc.accept();
//	cout << "Program completed";
//}

//File system

//#include<iostream>
//#include<fstream>
//#include<conio.h>
//using namespace std;
//class Employee
//{
//private:
//	int empid;
//	char empname[100];
//	double empsal;
//	
//public:
//	void getemployee() {
//		cout << "Enter Employee ID :";
//		cin >> empid;
//		cout << "Enter Employee name :";
//		cin >> empname;
//		cout << "Enter Employee Salary :";
//		cin >> empsal;
//		
//	}
//	void display() {
//		cout << empid << " " << empname << " " << empsal << " " << endl;
//	}
//};
//int main()
//{
//	
//	fstream fs;
//	fs.open("C:\\Users\\shvasant\\employee\\demo.dat", ios::out);
//	if (fs.is_open())
//	{
//		for(int i=0;i<2;i++)
//		{
//
//			Employee ep;
//			ep.getemployee();
//			fs.write((char*)&ep, sizeof(ep));
//		
//		} 
//	}
//	else
//	{
//		cout << "file opening error";
//	}
//	fs.close();
//	fstream f;
//	f.open("C:\\Users\\shvasant\\employee\\demo.dat", ios::in);
//	if (f.is_open())
//	{
//		while (!f.eof())
//		{
//			Employee e;
//			f.read((char*)&e, sizeof(e));
//			e.display();
//		}
//	}
//	f.close();
//	_getch();
//}

//has-a relationship

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Address {
//private:
//	int houseno;
//	string state;
//public:
//	Address(int num, string state) {
//		this->houseno = num;
//		this->state = state;
//	}
//	void display() {
//		cout << houseno << "\t" << state << endl;
//	}
//};
//
//class Employee {
//private:
//	int id;
//	string name;
//	Address *addrs;
//public:
//	Employee(int id, string name, Address *addrs) {
//		this->id = id;
//		this->name = name;
//		this->addrs = addrs;
//	}
//	void employeedetails() {
//		cout << id << "\t" << name << "\t" << endl;
//		addrs->display();
//	}
//};
//int main() {
//	Address a(10, "andhra pradesh");
//	Employee e(1001, "vasantham", &a);
//	e.employeedetails();
//	return 0;
//}



