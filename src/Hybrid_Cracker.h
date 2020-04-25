#pragma once
#include <map>
#include <string>
#include "password_list.h"
#include "Password_Cracker.h"

/*
	Base class for multiple types of password cracking
*/
class HybridCracker {
	protected:
		std::map<std::string, int> dict;
		Password_Cracker* main_cracker;
		Password_Cracker* alternate_cracker;
		//std::string(*base_hash_func)(const std::string& hash);
		
		//std::string hash_func(const std::string& hash, const int& num_iterations = 1);

	public:
		HybridCracker(Password_Cracker* main, Password_Cracker* alternate);

		// Takes an input string and tries to crack it using the hybrid method
		long long int crack_password(const std::string& s);
};