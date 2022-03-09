//
// Created by itamarq on 06/03/2022.
//

#include "mat.hpp"
#include <iostream>
#include <string>

using namespace std;
namespace ariel {
    void validateInput(int col, int row, char firstSym, char secondSym) {
        if (col <= 0 || row <= 0 || (int) col != col || (int) row != row || col % 2 == 0 || row % 2 == 0) {
            throw invalid_argument("Mat size is always odd");
        }if (secondSym == firstSym) {
            throw invalid_argument("The Symbols need to be different");
        }

    }

    string mat(int col, int row, char firstSym, char secondSym) {
        validateInput(col, row, firstSym, secondSym);
        string output = "@@";
        return output;
    }

}