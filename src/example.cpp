#include <vector>
#include <utility>
#include <string>

using namespace std;

int main() {
	vector<pair<string, int>> foo;
	vector<string> bar;
	foo.emplace_back(pair<string,int>("Hello, world!", 1));
	bar.emplace_back(foo[0]);
	return 0;
}