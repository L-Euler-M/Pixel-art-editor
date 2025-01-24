#include "PixelArtEditor.h"
#include "Console.h"
#include "GameObject.h"
#include "imgui_stdlib.h"

void setDarkThemeColors() {
    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
    colors[ImGuiCol_WindowBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.19f, 0.19f, 0.19f, 0.92f);
    colors[ImGuiCol_Border] = ImVec4(0.19f, 0.19f, 0.19f, 0.29f);
    colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.24f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40f, 0.40f, 0.40f, 0.54f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
    colors[ImGuiCol_CheckMark] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
    colors[ImGuiCol_SliderGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
    colors[ImGuiCol_Button] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 0.00f, 0.00f, 0.36f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.20f, 0.22f, 0.23f, 0.33f);
    colors[ImGuiCol_Separator] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
    colors[ImGuiCol_SeparatorHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
    colors[ImGuiCol_SeparatorActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
    colors[ImGuiCol_Tab] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.20f, 0.20f, 0.36f);
    colors[ImGuiCol_TabUnfocused] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
    colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_DockingPreview] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
    colors[ImGuiCol_DockingEmptyBg] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotLines] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogram] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_TableHeaderBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
    colors[ImGuiCol_TableBorderStrong] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
    colors[ImGuiCol_TableBorderLight] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
    colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
    colors[ImGuiCol_DragDropTarget] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
    colors[ImGuiCol_NavHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.35f);

    ImGuiStyle& style = ImGui::GetStyle();
    style.WindowPadding = ImVec2(8.00f, 8.00f);
    style.FramePadding = ImVec2(5.00f, 2.00f);
    style.CellPadding = ImVec2(6.00f, 6.00f);
    style.ItemSpacing = ImVec2(6.00f, 6.00f);
    style.ItemInnerSpacing = ImVec2(6.00f, 6.00f);
    style.TouchExtraPadding = ImVec2(0.00f, 0.00f);
    style.IndentSpacing = 25;
    style.ScrollbarSize = 15;
    style.GrabMinSize = 10;
    style.WindowBorderSize = 1;
    style.ChildBorderSize = 1;
    style.PopupBorderSize = 1;
    style.FrameBorderSize = 1;
    style.TabBorderSize = 1;
    style.WindowRounding = 7;
    style.ChildRounding = 4;
    style.FrameRounding = 3;
    style.PopupRounding = 4;
    style.ScrollbarRounding = 9;
    style.GrabRounding = 3;
    style.LogSliderDeadzone = 4;
    style.TabRounding = 4;

    style.WindowMenuButtonPosition = ImGuiDir_None;

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
sf::RenderTexture sceneViewTex;

void ShowSceneView() {
    sceneViewTex.create(700, 400);
    sceneViewTex.clear();
    ImGui::Begin("Scene View");
    ImGui::Image(sceneViewTex);
    ImGui::End();
}
sf::RenderTexture gameViewTex;
void ShowGameView() {
    gameViewTex.create(400, 400);
    gameViewTex.clear();
    ImGui::Begin("Game View");
    ImGui::Image(gameViewTex);
    ImGui::End();
}
CL::GameObject* selectedObject = nullptr;
void ShowProperties() {
    ImGui::Begin("Properties");
    if (selectedObject != nullptr)
    {
        ImGui::InputText("##Name", &selectedObject->name);
        if (ImGui::CollapsingHeader("Transform"))
        {
            //-----------------------------------------------------------
            ImGui::Text("Position");

            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(255, 0, 0, 255));
            ImGui::DragFloat("##PosX", &selectedObject->Position.x, 0.1);
            ImGui::PopStyleColor();
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 255, 0, 255));
            ImGui::DragFloat("##PosY", &selectedObject->Position.y, 0.1);
            ImGui::PopStyleColor();
            ImGui::Separator();
            //-----------------------------------------------------------
            ImGui::Text("Scale");
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(255, 0, 0, 255));
            ImGui::DragFloat("##ScaleX", &selectedObject->Scale.x, 0.1);
            ImGui::PopStyleColor();
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 255, 0, 255));
            ImGui::DragFloat("##ScaleY", &selectedObject->Scale.y, 0.1);
            ImGui::PopStyleColor();
            ImGui::Separator();
            //-----------------------------------------------------------
            ImGui::Text("Rotation");
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(255, 0, 0, 255));
            ImGui::DragFloat("##RotationX", &selectedObject->Rotation.x, 0.1);
            ImGui::PopStyleColor();
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 255, 0, 255));
            ImGui::DragFloat("##RotationY", &selectedObject->Rotation.y, 0.1);
            ImGui::PopStyleColor();
            ImGui::Separator();

        }
    }

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
CL::Console console;
void ShowConsole()
{
    if (ImGui::Begin("Console"))
    {
        if (console.messages.size() >= 0 && ImGui::ColorButton("##ClearAll", ImVec4(255, 0, 0, 255), ImGuiColorEditFlags_NoTooltip))
        {
            console.messages.clear();
        }
        ImGui::Separator();
        for (auto& msg : console.messages)
        {
            if (msg.type == CL::ERROR)
            {
                ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255, 0, 0, 255));
                ImGui::Selectable(msg.msg.c_str());
                ImGui::PopStyleColor();
                ImGui::Separator();
            }
            if (msg.type == CL::SUCCESS)
            {
                ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0, 255, 0, 255));
                ImGui::Selectable(msg.msg.c_str());
                ImGui::PopStyleColor();
                ImGui::Separator();
            }
            if (msg.type == CL::INFO)
            {
                ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0, 0, 255, 255));
                ImGui::Selectable(msg.msg.c_str());
                ImGui::PopStyleColor();
                ImGui::Separator();
            }
            if (msg.type == CL::WARNING)
            {
                ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255, 255, 0, 255));
                ImGui::Selectable(msg.msg.c_str());
                ImGui::PopStyleColor();
                ImGui::Separator();
            }
        }
        ImGui::End();
    }
}
std::vector<CL::GameObject> gameObjects;
void ShowHierarchy() {
    ImGui::Begin("Hierarchy");
    if (ImGui::Selectable("Add"))
    {
        CL::GameObject g;
        gameObjects.push_back(g);
    }
    ImGui::Separator();
    for (size_t i = 0; i < gameObjects.size(); i++)
    {
        CL::GameObject& g = gameObjects[i];
        g.ID = i;
        ImGui::PushID(i + "go");
        
        if (ImGui::Selectable(g.name.c_str(), false, ImGuiSelectableFlags_None, ImVec2(ImGui::GetWindowSize().x - 80, 20)))
        {
            selectedObject = &g;
        }
        ImGui::SameLine();
        if (ImGui::Selectable("Remove")) {
            gameObjects.erase(gameObjects.begin() + i);
            i--;
            selectedObject != &g;
        }
        ImGui::PopID();
        ImGui::Separator();
    }    
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

int main() {
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Engine Editor");
    window.setFramerateLimit(60);

    ImGui::SFML::Init(window);

    setDarkThemeColors();

    sf::Clock deltaClock;

    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
    io.ConfigViewportsNoTaskBarIcon = true;

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
        ShowHierarchy();
        ShowScriptEditor();
        ShowConsole();
        window.clear();
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
    return 0;
}

