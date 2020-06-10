#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue <int> quiz;
	quiz.push(18);
	quiz.push(19);
	quiz.push(3);
	quiz.push(10);
	quiz.push(19);
	quiz.push(3);
	cout<<"queue size:  "<<quiz.size()<<"\n";
	cout<<"queue front: "<<quiz.front()<<"\n";
	cout<<"queue back: "<<quiz.back()<<"\n";
	return 0;
}
