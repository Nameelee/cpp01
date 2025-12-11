/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.cpp                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: jelee <marvin@42.fr>                          +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/12/11 16:10:39 by jelee          #+#    #+#                */
/*   Updated: 2025/12/11 16:10:50 by jelee          ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str;
	std::string& stringREF = str;//put another name for 'str' 

	//---print address---
	std::cout << "===Check the address of Memory===" << std::endl;
	std::cout << "Memory address of the string variable: " << &str << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	//--print the value---
	std::cout << "===Check the value===" <<std::endl;
	std::cout << "Value of the sting variable: " << str <<std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}
