#include <iostream>
using namespace std;

class rocket
{
private:
	rocket() {};
	~rocket() {};
	static  rocket *rocket1;

public:
	static rocket* getrocket()
	{
		if (rocket1 == NULL)
		{
			rocket1 = new rocket();
		}
		return rocket1;
	}
	void run()
	{
		cout << "i an rocket1" << endl;
	}
};

//rocket* rocket1;

rocket* rocket::rocket1 = NULL;


int main()
{
	rocket* p = rocket::getrocket();
	p->run();

	getchar();
	return 0;
}