#include <memory>
#include <queue>
#include <string>
#include <unordered_map>
#include "Scene.h" 
//-------------------------------------------------------------------------------------------------------------
     //era "../Scenes/Scene.h"
//-------------------------------------------------------------------------------------------------------------


    /**
     * @brief Scene Manager
     *
     */
class SceneManager
{
public:
    /**
     * @brief Construct a new Scene Manager object
     *
     */
    SceneManager();
    /**
     * @brief add scene to manager
     *
     * @param name - name of scene
     * @param scene - scene pointer
     */
    void addScene(const std::string& name, std::shared_ptr<Scene> scene);
    /**
     * @brief activate scene by name
     *
     * @param name - name of scene
     */
    void activateScene(const std::string& name);
    /**
     * @brief remove scene by name
     *
     * @param name - name of scene
     */
    void removeScene(const std::string& name);
    /**
     * @brief send event to active scene
     *
     * @param event - SDL2 event
     */
    void onEvent(const SDL_Event& event);
    /**
     * @brief update active scene
     *
     * @param delta - time in milliseconds
     */
    void update(const unsigned int delta);
    /**
     * @brief draw objects of active scene
     *
     */
     //-------------------------------------------------------------------------------------------------------------
    void draw(SDL_Rect& _camera) const;
    //-------------------------------------------------------------------------------------------------------------
private:
    std::unordered_map<std::string, std::shared_ptr<Scene>> scenes; // scenes
    std::queue<std::shared_ptr<Scene>> removedScenes;               // removed scenes, for clean up
    std::shared_ptr<Scene> currentScene = nullptr;
};