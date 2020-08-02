#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int first, second, third, mid_term, final ;
	cout<< "===============QUIZZES=============== " << endl;
	cout<< "Enter first quizz  (10) :";
	cin >> first ;
	cout<< "Enter second quizz (10) :";
	cin >>  second;
	cout<< "Enter third quizz  (10) :";
	cin >>  third ;
    cout<< "===============MID_TERM=============== " << endl;
    cout<< "Enter mid-term (40) :";
    cin >>  mid_term ;
    cout<< "===============FINAL================== " << endl;
    cout<< "Enter final  (50) :";
    cin >>  final ;
    float  Quizztotal , sum , total ;
    sum = first + second + third ;
    Quizztotal = sum / 3;
    cout << "Quizz total : " << Quizztotal <<  endl;
    cout << "mid_term : "    << mid_term  << endl;
    cout << "final : "       << final << endl ;
    total= Quizztotal + mid_term + final ;
	cout << "Total : "  << total << endl ;
	cout << "our Score is"<< ((total)>= 50 ? "Pass":"FAIL") << endl ;
	
	system ("pause");
	return(0);
}



