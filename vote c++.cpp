#include<iostream>
using namespace std;
int main()
{
	 int age=0;
	 cout<<"RIGHT TO VOTE"<<endl;
	 cout<<"Mention your age to check whether you are eligible to vote or not"<<endl;
	 cout<<"Enter your age = ";
	 cin>>age;
	 if(age>=18)
	 {
	 	cout<<"\nHey,You can vote your age is"<<age;
	 }
	 else
	 {
	 	cout<<"Oops!!You are not eligible to give vote,wait for " <<18-age<<" year";
	 }
}
