#include <iostream>
#include <sstream>
#include <unordered_map>

struct Node {
    char value;
    Node* left;
    Node* right;
};

Node* buildHuffmanTree(std::istringstream& iss) {
    std::string token;
    iss >> token;

    if (token == "0") {
        return nullptr;
    }

    Node* node = new Node;
    node->value = token[0];
    node->left = buildHuffmanTree(iss);
    node->right = buildHuffmanTree(iss);

    return node;
}

std::string encryptText(const std::string& text, const std::unordered_map<char, std::string>& encodingMap) {
    std::string encryptedText;

    for (char c : text) {
        encryptedText += encodingMap.at(c);
    }

    return encryptedText;
}

std::string decryptText(const std::string& text, Node* root) {
    std::string decryptedText;
    Node* current = root;

    for (char c : text) {
        if (c == '0') {
            current = current->left;
        } else {
            current = current->right;
        }

        if (current->left == nullptr && current->right == nullptr) {
            decryptedText += current->value;
            current = root;
        }
    }

    return decryptedText;
}

int main() {
    std::string treeString;
    std::getline(std::cin, treeString);
    std::istringstream treeIss(treeString);
    Node* root = buildHuffmanTree(treeIss);

    int numQueries;
    std::cin>>numQueries;
    std::cin >> numQueries;
    std::cin.ignore();

    std::unordered_map<char, std::string> encodingMap;
    std::string token;

    while (numQueries--) {
        std::getline(std::cin, token);

        if (token.find_first_not_of("01") == std::string::npos) {
            std::cout << decryptText(token, root) << std::endl;
        } else {
            std::cout << encryptText(token, encodingMap) << std::endl;
        }
    }

    return 0;
}
