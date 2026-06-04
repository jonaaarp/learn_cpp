#include <iostream>
#include <map>


int main(int argc, char *argv[])
{
	
	std::map<std::string, int> users = {{"Jonathan", 19}, {"Angeline", 19}};
	
	
	
	users.insert({"Jona", 111});
	users.at("Jona") = 10;
	
	
	 std::cout << users.size() << std::endl;
	std::cout << sizeof(users) << std::endl;
	
	// users.empty  return 0 is not empty
	
	if (users.empty()) std::cout << "Hash map is empty" << std::endl;
	else std::cout << "Hash map is not empty" << std::endl;
	
	
	
	std:: cout << "modifications "<< users.at("Jona") << std::endl;
	
	
	std::cout << &users.at("Jonathan")<<std::endl;	
	for (auto& element : users){
	    
	    std::cout << &element.second << std::endl;
	    
	}
	
	users.clear();
	std::cout << users.size() << std::endl;
	
	return 0;
}
