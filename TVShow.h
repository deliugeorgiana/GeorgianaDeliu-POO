#ifndef TVSHOW_H
#define TVSHOW_H

#include "MediaItem.h"

// clasa derivata emisiune tv
class TVShow : public MediaItem {
public:
    TVShow([[maybe_unused]] [[maybe_unused]] [[maybe_unused]] std::string title,
           [[maybe_unused]] std::string description, float rating);

    //destructor
    ~TVShow() override = default;

    // fcn virt rating
    [[nodiscard]] float GetRating() const override;

    // clone
    [[nodiscard]] std::shared_ptr<MediaItem> Clone() const override;
};
#endif