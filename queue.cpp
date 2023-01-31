#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> Q;

	Q.push(10);
	Q.push(20);
	Q.push(30);
	cout<<"Queue size before printing the elements: "<<Q.size()<<endl;
	cout<<"Queue element are..."<<endl;
	while(!Q.empty()){
		cout<<" "<<Q.front();
		Q.pop();
	}

	cout<<endl;
	cout<<"Queue size after printing the elements: "<<Q.size()<<endl;

	return 0;
}
