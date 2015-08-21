#include <iostream>
int main()
// LOOP EXCERCISE #1
{
	for (int i = 100; i >= 0; i--)
	{
		// do not need breaks if you have preset conditions for the loop

		std::cout << i << std::endl;

	}

	system("pause");

	for (int i = 99; i >= 0; i--)
		{
			std::cout << i << std::endl;

			
	}
	system("pause");
		for (int i = 100; i >= 1; i--)
		{
			std::cout << i << std::endl;

			
		}
		system("pause");
		for (int i = 100; i >= 0; i-=2) // REMEMBER THIS FOR THE LOVE OF YOURSELF i-=2 or i-=(num)!!!
		{


			std::cout << i << std::endl;
		}
	
		system("pause");
		return 0; 
		
			/*declaring a variable
			// type string
			// name mystring
			// value "hello"
			std::string mystring = "hello";


		//std::string doit = "pause";
		//system(doit.c_str());*/
		
	
}