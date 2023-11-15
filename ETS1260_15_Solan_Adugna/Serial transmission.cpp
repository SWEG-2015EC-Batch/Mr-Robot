#include <iostream>

int main() {
    int transmissionRate = 960; // characters per second
    int fileSize = 419430400; // file size in bytes

    double timeInSeconds = fileSize / transmissionRate;
    double timeInMinutes = timeInSeconds / 60;
    double timeInHours = timeInMinutes / 60;
    double timeInDays = timeInHours / 24;

    std::cout << "Time to send the file:" << std::endl;
    std::cout << "Seconds: " << timeInSeconds << std::endl;
    std::cout << "Minutes: " << timeInMinutes << std::endl;
    std::cout << "Hours: " << timeInHours << std::endl;
    std::cout << "Days: " << timeInDays << std::endl;

    return 0;
}
