//example of parametirize constructor
#include<iostream>
using namespace std;
class First{
	private:
	    float length;
	    float height;
	public:
		First(float len,float hgt)
		{
			length=len;
			height=hgt;
		}
		void showvalue()
		{
			cout<<"the value of length is "<<length<<endl;
			cout<<"the value of height is "<<height<<endl;
		}
		
};
int main()
{
	First first1(30.6,56.6),first2(67,55.8);
	first1.showvalue();
	first2.showvalue();
	return 0;
}
