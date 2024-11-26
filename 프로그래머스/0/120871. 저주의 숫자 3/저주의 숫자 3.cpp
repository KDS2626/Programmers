#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int i = 1, answer = 1;

		// 1. i가 1부터 n까지 증가
	while (1)
	{

		// 3의 배수
		if ((answer % 3) == 0 && answer != 30)
		{
			answer++;
		}
		// 일의자리가 3 (13, 23, 43, 53, 63, 73, 83, 93) 
		if ((answer % 10) == 3)
		{
			answer++;
			continue;
		}
        
        if (answer > 100)
		{
			if ((answer - 100 >= 30) && (answer - 100 <= 39))
			{
				answer++;
				continue;
			}
		}
        
		// 30~39은 건너뜀
		if (answer == 30)
		{
			answer = 40;
		}
		
		if (i == n) break;

		i++;
		answer++;
	}
    
    return answer;
}