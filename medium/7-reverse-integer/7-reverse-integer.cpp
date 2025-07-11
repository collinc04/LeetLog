        for(int i = numString.length() - 1; i >= 0; i--){
        return std::stoi(solution);
            solution.append(1, numString[i]);
        }
        std::string solution;
        std::cout << solution;
        long int check = std::stol(solution);
        if(check > INT_MAX) {
            return 0;
        }
        if(numString[0] == '-') {
            return std::stoi(solution) * -1;
        }
    }
};