#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    
    // direction이 left 경우
    if (direction == "left")
    {
        int tmp = numbers[0];
        
        for (int i=0; i<numbers.size(); i++)
        {
            if (i==numbers.size()-1) break;
            numbers[i] = numbers[i+1];
        }
        numbers[numbers.size()-1] = tmp;
    }
    
    // direction이 right 경우
    else
    {
        int tmp = numbers[numbers.size()-1];
        
        for (int i=numbers.size()-1; i>=0; i--)
        {
            if (i==0) break;
            numbers[i] = numbers[i-1];
        }
        numbers[0] = tmp;
    }
    
    return numbers;
}