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
				cout<<"The number is "<<num;
			}
	};
		Local obj;
		obj.getdata(7);
}
int main()
{
	cout<<"Demonstratiom of a Local class"<<endl;
	func();
	return 0;
}
