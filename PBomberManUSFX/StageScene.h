#pragma once
#include <SDL.h>
#include <memory>

#include "Text.h"
#include "Scene.h"
class StageScene : public Scene
{
public:
    /**
     * @brief Construct a new Stage Scene
     *
     * @param game
     */
    StageScene(Game* game);
    /**
     * @brief Trigger on update if scene is active
     *
     * @param delta - time in milliseconds
     */

    //virtual void update(const unsigned int delta) override;

private:
    // timer until switch to next menu
    int untilNextSceneTimer = 0;
    // const
    const int sceneTimer = 2000;
    unsigned int stage = 0;
    unsigned int score = 0;
};


