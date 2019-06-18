
#include <iostream>


int main()
{

	unsigned char input_name[50] = "";
	unsigned char exit_flag = 0;
	do {
		std::cout << "Do you wanna eat ? {Yes or No} \n ";
		std::cin >> input_name;
		if (strcmp((const char*)input_name, "No"))
		{
			std::cout << "KFAYA AKL YA BAGRA !\n";
		}
		else if (strcmp((const char*)input_name, "Yes")==0)
		{
			std::cout << "GOOD BOY !\n";
			exit_flag = 1;
		}
		else
		{
			std::cout << "Msh fahm :D  !\n\n\n\n\n\n";
		}
	} while (exit_flag==0);
	
	
}
