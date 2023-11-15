#include <iostream>
#include <string>

class Node {
public:
    std::string player;
    Node* next;

    Node(const std::string& playerName) : player(playerName), next(nullptr) {}
};

class BattingOrder {
public:
    Node* head;

    BattingOrder() : head(nullptr) {}

    void addPlayer(const std::string& playerName) {
        Node* newNode = new Node(playerName);
        newNode->next = head;
        head = newNode;
    }

    void printOrder() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->player << std::endl;
            current = current->next;
        }
    }
};

int main() {
    BattingOrder battingOrder;

    // Adding players to the batting order
    battingOrder.addPlayer("Kingery");
    battingOrder.addPlayer("Hall");
    battingOrder.addPlayer("Peterson");
    battingOrder.addPlayer("Marchan");
    battingOrder.addPlayer("Bonifacio");
    battingOrder.addPlayer("Stokes");
    battingOrder.addPlayer("Toffey");
    battingOrder.addPlayer("Robertson");
    battingOrder.addPlayer("Castillo");

    // Printing the batting order
    std::cout << "Lehigh Valley Iron Pigs Batting Order:" << std::endl;
    battingOrder.printOrder();

    return 0;
}
