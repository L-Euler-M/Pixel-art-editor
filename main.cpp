#include "PixelArtEditor.h"
void setDarkThemeColors() {
    ImGuiStyle& style = ImGui::GetStyle();
    ImVec4* colors = style.Colors;

    colors[ImGuiCol_Text] = ImVec4(0.95f, 0.96f, 0.98f, 1.00f);
    colors[ImGuiCol_WindowBg] = ImVec4(0.13f, 0.14f, 0.15f, 1.00f);
    colors[ImGuiCol_ChildBg] = ImVec4(0.13f, 0.14f, 0.15f, 1.00f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.13f, 0.14f, 0.15f, 1.00f);
    colors[ImGuiCol_Border] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.21f, 0.22f, 1.00f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.40f, 0.40f, 0.40f, 1.00f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.28f, 0.29f, 0.30f, 1.00f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.13f, 0.14f, 0.15f, 1.00f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
    colors[ImGuiCol_CheckMark] = ImVec4(0.11f, 0.64f, 0.92f, 1.00f);
    colors[ImGuiCol_SliderGrab] = ImVec4(0.11f, 0.64f, 0.92f, 1.00f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.08f, 0.50f, 0.72f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.20f, 0.21f, 0.22f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.28f, 0.29f, 0.30f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.06f, 0.53f, 0.76f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.20f, 0.21f, 0.22f, 1.00f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.26f, 0.27f, 0.28f, 1.00f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.11f, 0.64f, 0.92f, 1.00f);
    colors[ImGuiCol_Separator] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
    colors[ImGuiCol_SeparatorHovered] = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
    colors[ImGuiCol_SeparatorActive] = ImVec4(0.11f, 0.64f, 0.92f, 1.00f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.26f, 0.27f, 0.28f, 1.00f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.28f, 0.29f, 0.30f, 1.00f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(0.06f, 0.53f, 0.76f, 1.00f);
    colors[ImGuiCol_Tab] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.20f, 0.21f, 0.22f, 1.00f);
    colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.21f, 0.22f, 1.00f);
    colors[ImGuiCol_TabUnfocused] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.20f, 0.21f, 0.22f, 1.00f);
}
PixelEditor editor;
void ShowMainDockingSpace() {
    ImGuiViewport* viewport = ImGui::GetMainViewport();
    ImGui::SetNextWindowPos(viewport->Pos);
    ImGui::SetNextWindowSize(viewport->Size);
    ImGui::SetNextWindowViewport(viewport->ID);

    ImGuiWindowFlags window_flags = ImGuiWindowFlags_MenuBar | ImGuiWindowFlags_NoDocking;
    window_flags |= ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove;
    window_flags |= ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoNavFocus;

    ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
    ImGui::Begin("DockSpace Demo", nullptr, window_flags);
    ImGui::PopStyleVar(2);

    ImGuiID dockspace_id = ImGui::GetID("MyDockSpace");
    ImGui::DockSpace(dockspace_id, ImVec2(0.0f, 0.0f), ImGuiDockNodeFlags_None);

    ImGui::End();
}

void ShowMenuBar() {
    if (ImGui::BeginMainMenuBar()) {
        if (ImGui::BeginMenu("File")) {
            if (ImGui::MenuItem("New")) {}
            if (ImGui::MenuItem("Open...", "Ctrl+O")) {}
            if (ImGui::MenuItem("Save", "Ctrl+S")) {}
            if (ImGui::MenuItem("Save As...")) {}
            ImGui::Separator();
            if (ImGui::MenuItem("Exit")) {}
            ImGui::EndMenu();
        }
        if (ImGui::BeginMenu("Edit")) {
            if (ImGui::MenuItem("Undo", "Ctrl+Z")) {}
            if (ImGui::MenuItem("Redo", "Ctrl+Y")) {}
            ImGui::Separator();
            if (ImGui::MenuItem("Cut", "Ctrl+X")) {}
            if (ImGui::MenuItem("Copy", "Ctrl+C")) {}
            if (ImGui::MenuItem("Paste", "Ctrl+V")) {}
            ImGui::EndMenu();
        }
        ImGui::EndMainMenuBar();
    }
}

void ShowSceneView() {
    ImGui::Begin("Scene View");
    ImGui::Text("Placeholder for Scene View");
    // Add scene view specific functionalities here
    ImGui::End();
}

void ShowGameView() {
    ImGui::Begin("Game View");
    ImGui::Text("Placeholder for Game View");
    // Add game view specific functionalities here
    ImGui::End();
}

void ShowProperties() {
    ImGui::Begin("Properties");
    ImGui::Text("Properties");

    // Example of using a button
    if (ImGui::Button("Save")) {
        // Action when Save button is clicked
    }

    // Example of using a slider
    static float float_value = 0.5f;
    ImGui::SliderFloat("Float", &float_value, 0.0f, 1.0f);

    // Example of displaying text
    ImGui::Text("Hello, world!");

    // Add properties specific functionalities here
    ImGui::End();
}

void ShowAssetsList() {
    ImGui::Begin("Assets List");
    ImGui::Text("Placeholder for Assets List");
    // Add assets list specific functionalities here
    ImGui::End();
}

void ShowSceneList() {
    ImGui::Begin("Scene List");
    ImGui::Text("Placeholder for Scene List");
    // Add scene list specific functionalities here
    ImGui::End();
}

void ShowTaskBar() {
    ImGui::Begin("Task Bar");
    ImGui::Text("Placeholder for Task Bar");
    // Add task bar specific functionalities here
    ImGui::End();
}

void ShowAnimationEditor() {
    ImGui::Begin("Animation Editor");
    ImGui::Text("Placeholder for Animation Editor");
    // Add animation editor specific functionalities here
    ImGui::End();
}

void ShowScriptEditor() {
    ImGui::Begin("Script Editor");
    ImGui::Text("Placeholder for Script Editor");
    // Add script editor specific functionalities here
    ImGui::End();

}
void ShowPixelArtEditor()
{
    ImGui::Begin("Pixel Editor");
    editor.run();
    ImGui::End();
}
int main() {
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Engine Editor");
    window.setFramerateLimit(60);

    ImGui::SFML::Init(window);

    setDarkThemeColors();

    sf::Clock deltaClock;

    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(event);

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        ShowMainDockingSpace();
        ShowMenuBar();
        ShowSceneView();
        ShowGameView();
        ShowProperties();
        ShowAssetsList();
        ShowSceneList();
        ShowTaskBar();
        ShowAnimationEditor();
        ShowScriptEditor();
        ShowPixelArtEditor();
        window.clear();
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
    return 0;
}

