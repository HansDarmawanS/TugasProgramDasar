#include <iostream>
#include <vector>

class ScoreManager {
public:
    void addScore(int amount) {
        score += amount;
        std::cout << "score diubah ke: " << score << std::endl;
    }

    int getScore() const {
        return score;
    }

private:
    int score = 0;
};

int main() {
    ScoreManager scoreManager;

    std::cout << "score sebelum diubah: " << scoreManager.getScore() << std::endl;

    scoreManager.addScore(5);
    scoreManager.addScore(5);
    scoreManager.addScore(5);
    scoreManager.addScore(5);
    scoreManager.addScore(5);
    scoreManager.addScore(5);

    std::cout << "score setelah diubah: " << scoreManager.getScore() << std::endl;

    return 0;
}