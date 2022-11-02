#include<iostream>
struct Log
{
public :
	enum Level {
		E = 1, E2 = 12
	};
private :
	Level M_LL = E2;
public	:

	void SetLevel(Level level)
	{
		this->M_LL = level;
	}

	void Error(char* message)
	{
		if (M_LL >= E)
		{
			std::cout << "[ERROR]" << message << std::endl;
		}
	}

};


int main()
{
	
	char A[] = "Hell";
	Log e1;
	e1.SetLevel(e1.E2);
	e1.Error(A);
}
