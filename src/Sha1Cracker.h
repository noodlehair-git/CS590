#pragma once
#include "Hybrid_Cracker.h"
#include <string>

class Sha1Cracker : HybridCracker {
private:
	int num_iterations;
public:
	std::string hash_func(const std::string& hash);
	void set_num_iterations(const int& num_iters);
};