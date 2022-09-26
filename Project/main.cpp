#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "";
	int i = 0;
	for (; i < seoul.size(); i++)
	{
		auto idx = seoul[i].find("Kim");
		if (0 <= idx && idx <= 20)
			break;
	}
	answer += "�輭���� " + to_string(i) + "�� �ִ�";
	return answer;
}

void main()
{
	//test
	//auto ret = solution({"Jane", "Kim"});
}