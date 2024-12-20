#ifndef FAVORITES_WATCHLIST_H
#define FAVORITES_WATCHLIST_H

#include "Watchlist.h"

class [[maybe_unused]] FavoritesWatchlist : public Watchlist {
public:
    // constr
    explicit FavoritesWatchlist([[maybe_unused]] std::string user);

    ~FavoritesWatchlist() override =default;

    void DisplayWatchlist() const override;

};

#endif
