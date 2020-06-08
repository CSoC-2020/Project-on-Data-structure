class Solution
{
public:


vector<string> fizzBuzz(int n) {
	vector<string> vRes;
	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0 && i % 3 == 0)
			vRes.push_back("FizzBuzz");
		else if (i % 5 == 0)
			vRes.push_back("Buzz");
		else if (i % 3 == 0)
			vRes.push_back("Fizz");
		else
			vRes.push_back(to_string(i));
	}
	return vRes;
}
};
