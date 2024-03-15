#include<iostream>
int main()
{
	int a,i,j,c;
//	std::cout << "enter number of rows" << std::endl;
	//std::cin >> a;
	
	for(i = 0;i < 5;i++)
	{
		for(j = i; j < 5 ;j++)
		{
			std::cout << " ";
	    }
	
		for(c = 0;c <= i;j++)
		{
	    	std::cout << "*";
		}	
		std::cout <<std::endl;
	}
	return 0;
}