//deafault constructor
#include<iostream>
using namespace std;
class First{
	private:
		int a;
	public:
		//create a constructor
		First(){
			a=89;
			cout<<"enter the value of a:"<<endl;
			cin>>a;
			cout<<"the value of a ="<<a;
	    }
};
int main()
{
	First obj1;
	return 0;
}
