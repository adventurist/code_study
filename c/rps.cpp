#include <string>
#include <iostream>

const int PAPER_AND_ROCK	  {1};
const int SCISSORS_AND_ROCK {4};
const int SCISSORS_AND_PAPER{3};

std::string rps(std::string s1, std::string s2) {
	int size_1 = s1.size();
	int size_2 = s2.size();

	if (size_1 != size_2)
	{
    bool first_higher = (size_1 > size_2);
		switch ((first_higher) ? (size_1 - size_2) : (size_2 - size_1))
		{
			case (PAPER_AND_ROCK):
				return (first_higher) ? "Player 1 wins" : "Player 2 wins";
			case (SCISSORS_AND_ROCK):
				return (first_higher) ? "Player 2 wins" : "Player 1 wins";
			case (SCISSORS_AND_PAPER):
				return (first_higher) ? "Player 1 wins" : "Player 2 wins";
		}
	}
	return "TIE";
}

int main()
{
  std::cout << rps("rock", 		 "paper") 	 << std::endl;
	std::cout << rps("scissors", "paper") 	 << std::endl;
	std::cout << rps("rock", 		 "scissors") << std::endl;
	std::cout << rps("paper", 	 "scissors") << std::endl;
	std::cout << rps("scissors", "rock")     << std::endl;
	std::cout << rps("paper", 	 "rock")     << std::endl;
	std::cout << rps("rock",     "rock")     << std::endl;
  std::cout << rps("paper", 	 "paper")    << std::endl;
	std::cout << rps("scissors", "scissors") << std::endl;
}
