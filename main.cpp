#include <iostream>
#include <string>
using namespace std;

class TPen {
private:
	int FColor = 0;
public:
	TPen() {}
	int GetColor() {
		return FColor;
	} 
	void SetColor(int color) {
		FColor = color;
	}
};

int main()
{
	TPen pencil;
	cout << pencil.GetColor() << endl;
	pencil.SetColor(1);
	cout << pencil.GetColor() << endl;
	return 0;
}
