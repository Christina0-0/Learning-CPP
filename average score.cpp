#include <iostream>
#include <vector>

int main()
{

    std::vector<int> v1 = {88, 92, 76, 81, 95};
    double total_score = 0;
    double average_score = 0;

    for (auto val : v1)
    {
        total_score += val;
    }
    average_score = total_score / v1.size();
    std::cout << "The total score is: " << total_score << std::endl;
    std::cout << "The average score is: " << average_score << std::endl;

    return 0;
}