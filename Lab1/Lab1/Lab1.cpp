#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(20) << setfill('$') << setiosflags(ios::hex) << "privet" << endl;
	return 0;
}