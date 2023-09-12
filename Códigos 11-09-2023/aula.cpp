#include <iostream>
#include <ctime>

// Função para obter a hora e os minutos atuais
void GetHourAndMinutes(int &hour, int &minutes) {
    std::time_t currentTime = std::time(nullptr);
    std::tm* timeInfo = std::localtime(&currentTime);
    hour = timeInfo->tm_hour;
    minutes = timeInfo->tm_min;
}

int main() {
    int currentHour, currentMinutes;
    GetHourAndMinutes(currentHour, currentMinutes);

    // Suponha que você tenha uma hora e minutos de referência
    int referenceHour = 20;
    int referenceMinutes = 30;

    // Calcule a diferença em minutos
    int diffMinutes = (currentHour - referenceHour) * 60 + (currentMinutes - referenceMinutes);

    std::cout << "Diferença em minutos: " << diffMinutes << " minutos." << std::endl;

    return 0;
}
