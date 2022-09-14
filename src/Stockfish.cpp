//
// Created by Simona on 02-Sep-22.
//

#include "Stockfish.hpp"
#include <algorithm>

Stockfish::Stockfish() {
};

std::string Stockfish::exec(const char* cmd){
    char buffer[128];
    std::string result = "";
    FILE* pipe = _popen(cmd, "r");
    if (!pipe) throw std::runtime_error("popen() failed!");
    try {
        while (!feof(pipe)) {
            if (fgets(buffer, 128, pipe) != NULL)
                result += buffer;
        }
    }
    catch (...) {
        _pclose(pipe);
        throw;
    }
    _pclose(pipe);
    return result;
}

std::string Stockfish::getNextComputerMove(std::string moves) {
    std::string name = "python ..\\res\\StockfishScript.py ";
    std::string command = name.append(moves);
    const char* tmp = command.c_str();
    return exec(tmp);
}

glm::vec2 Stockfish::convertUciFormatToChessBoardCoordinates(std::string position){
    glm::vec2 boardPosition;

    std::vector<char> letter = {'a','b','c','d','e','f','g','h'};
    std::vector<char> number = {'1','2','3','4','5','6','7','8'};

    auto itrL  = std::find(letter.begin(), letter.end(), position[0]);
    boardPosition.y = std::distance(letter.begin(), itrL);

    auto itrN = std::find(number.begin(), number.end(), position[1]);
    boardPosition.x = std::distance(number.begin(), itrN);

    return boardPosition;
}

std::string Stockfish::getLegalMovesFromScript(std::string moves) {
    std::string name = "python ..\\res\\LegalMoves.py ";
    std::string command = name.append(moves);
    const char* tmp = command.c_str();
    return exec(tmp);
}