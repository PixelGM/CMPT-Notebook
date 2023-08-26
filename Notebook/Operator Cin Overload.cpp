#include <iostream>

using namespace std;

class Ex
{
public:
    int num = 1;

    friend ostream& operator<<(ostream& input, Ex& p);
};

ostream& operator<<(ostream& input, Ex& dummy)
{
    input << dummy.num;
    return input;
}

int main()
{
    Ex a;
    cout << a;
}
