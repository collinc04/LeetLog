                bulls++;
                continue;
            }
            secretMap[secret[i]] ++;
            guessMap[guess[i]] ++;
        }
        for(const auto& [key, value] : secretMap) {
            if(guessMap.contains(key)){
                cows += std::min(secretMap[key], guessMap[key]);
            }
        }
        return std::to_string(bulls) + "A" + std::to_string(cows) + "B";
    }
};