#pragma once

#include "Model.h"
#include "ShaderProgram.h"
#include "Mesh.h"

#include <unordered_map>


class App {
public:
    void init_assets(void);

    void scroll_callback(double xoffset, double yoffset);
    void key_callback(int key, int scancode, int action, int mods);
    void error_callback(int error, const char* description);
    void fbsize_callback(int width, int height);
    void cursor_position_callback(double xpos, double ypos);
    void mouse_button_callback(int button, int action, int mods);
    void GLAPIENTRY MessageCallback(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam);


    App();

    bool init(void);
    int run(void);

    ~App();
private:
    GLFWwindow* window = nullptr;

protected:
    std::unordered_map<std::string, Model> scene;
};

