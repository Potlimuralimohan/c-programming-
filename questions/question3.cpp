#include <iostream>
#include <vector>
#include <algorithm>

struct Project {
    int expenditure;
    int completionBonus;
    int rewardPenalty;
};

bool compareProjects(const Project& a, const Project& b) {
    // Compare projects based on completion bonus - penalty in descending order
    return (a.completionBonus - a.rewardPenalty) > (b.completionBonus - b.rewardPenalty);
}

int calculateMinBudget(std::vector<Project>& projects) {
    int minBudget = 0;

    // Sort projects based on completion bonus - penalty in descending order
    std::sort(projects.begin(), projects.end(), compareProjects);

    // Iterate through projects and calculate the minimum budget
    for (const Project& project : projects) {
        if (minBudget < project.expenditure) {
            minBudget = project.expenditure;
        } else {
            minBudget += project.rewardPenalty;
        }
    }

    return minBudget;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Project> projects(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> projects[i].expenditure >> projects[i].completionBonus >> projects[i].rewardPenalty;
    }

    int result = calculateMinBudget(projects);

    std::cout << result << std::endl;

    return 0;
}
