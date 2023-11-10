#include<iostream>
using namespace std;
void func()
{
	class Local
	{
		private:
			int num;
		public:
			void getdata(int n)
			{
				num=n;
				cout<<"The number you've entered the number is the:  "<<num;
				cout<<"The another number is:"<<endl;
			}
	};
		Local obj;
		obj.getdata(80);
}
int main()
{
	cout<<"Demonstration of the Local class is"<<endl;
	func();
	return 0;
}
