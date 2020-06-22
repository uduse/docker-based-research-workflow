#include <iostream>
#include <string>
#include <random>

int main(int argc, char* argv[])
{
    int num = std::atoi(argv[1]);
    double mean = std::atof(argv[2]);
    double std = std::atof(argv[3]);

    static std::random_device random_device;
    static std::mt19937 engine{random_device()};
    static std::normal_distribution<double> distribution{mean, std};

    for (int i = 0; i < num; ++i)
    {
        std::cout << distribution(engine) << std::endl;
    }

    std::cout << "done." << std::endl;

    return 0;
}
