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
				cout<<"The number you've entered the number is:  "<<num;
			}
	};
		Local obj;
		obj.getdata(50);
}
int main()
{
	cout<<"Demonstration of the Local class is"<<endl;
	func();
	return 0;
}
