#include <Malena/Engine/App/Application.h>
#include <Malena/Graphics/Controls/RectangleButton.h>

class MyApp : public ml::Application
{
    ml::RectangleButton button;

public:
    MyApp() : ml::Application(sf::VideoMode({800, 480}), "My App") {}

    void initialization() override
    {
        button.setSize({240, 64});
        button.setPosition({40, 40});
        button.setString("Click me");
        addComponent(button);
    }

    void registerEvents() override
    {
        button.onClick([this]{ button.setString("Clicked!"); });
    }
};

int main() { MyApp().run(); }
