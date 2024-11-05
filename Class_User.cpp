#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Class_Media_Item.cpp"

class User {
private:
    std::string name;
    std::string preferredLanguage;
    std::vector<std::shared_ptr<MediaItem>> favorites; // Use shared_ptr for favorites

public:
    // Constructor explicit de inițializare
    explicit User(std::string name, std::string preferredLanguage)
            : name(std::move(name)), preferredLanguage(std::move(preferredLanguage)) {}

    // Constructor de copiere
    User(const User& other) = default;

    // Operator= de copiere
    User& operator=(const User& other) {
        if (this != &other) {
            name = other.name;
            preferredLanguage = other.preferredLanguage;
            favorites = other.favorites; // Use shared_ptr copy
        }
        return *this;
    }

    // Destructor
    ~User() = default;

    // Funcții publice
    void AddToFavorites(const std::shared_ptr<MediaItem>& item) {
        favorites.push_back(item);
    }

    [[nodiscard]] std::shared_ptr<MediaItem> GetTopFavorite() const {
        if (!favorites.empty()) return favorites.front();
        return nullptr;
    }

    [[maybe_unused]] [[nodiscard]] size_t FavoriteCount() const { return favorites.size(); }

    // Operator<<
    friend std::ostream& operator<<(std::ostream& os, const User& user) {
        os << "User: " << user.name << ", Language: " << user.preferredLanguage << ", Favorites: " << user.favorites.size();
        return os;
    }
};

#endif