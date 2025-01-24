#pragma once
#include <imgui-SFML.h>
#include <SFML/Graphics.hpp>
#include <vector>
#include <imgui.h>
const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;
const int PIXEL_SIZE = 20;
const int GRID_SIZE = 8;

sf::Color primaryColors[7] = {
    sf::Color(255, 255, 255),   // White
    sf::Color(255, 0, 0),       // Red
    sf::Color(0, 255, 0),       // Green
    sf::Color(0, 0, 255),       // Blue
    sf::Color(255, 255, 0),     // Yellow
    sf::Color(255, 165, 0),     // Orange
    sf::Color(128, 0, 128)      // Purple
};
std::vector<std::vector<sf::Color>> pixels(GRID_SIZE, std::vector<sf::Color>(GRID_SIZE, sf::Color::White));
int selectedColorIndex = 0;
struct PixelEditor 
{

    void saveImage(const std::string& filename) {
        sf::RenderTexture texture;
        texture.create(GRID_SIZE * PIXEL_SIZE, GRID_SIZE * PIXEL_SIZE);
        texture.clear(sf::Color::Transparent);

        for (int y = 0; y < GRID_SIZE; ++y) {
            for (int x = 0; x < GRID_SIZE; ++x) {
                sf::RectangleShape pixel(sf::Vector2f(PIXEL_SIZE, PIXEL_SIZE));
                pixel.setPosition(x * PIXEL_SIZE, y * PIXEL_SIZE);
                pixel.setFillColor(pixels[y][x]);
                texture.draw(pixel);
            }
        }

        texture.display();
        texture.getTexture().copyToImage().saveToFile(filename.c_str());
    }
    void run()
    {
        for (int y = 0; y < GRID_SIZE; ++y) {
            for (int x = 0; x < GRID_SIZE; ++x) {
                ImGui::PushID(y * GRID_SIZE + x);
                if (ImGui::ColorButton("", pixels[y][x], ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoPicker, ImVec2(30, 30))) {
                    pixels[y][x] = primaryColors[selectedColorIndex];
                }
                ImGui::PopID();
                if (x < GRID_SIZE - 1)
                    ImGui::SameLine();
            }
        }
        ImGui::Separator();

        for (int i = 0; i < 7; ++i) {
            ImGui::ColorButton("", primaryColors[i], ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoPicker, ImVec2(30, 30));
            if (ImGui::IsItemClicked()) {
                selectedColorIndex = i;
            }
            if (i < 7)
                ImGui::SameLine();

        }
    }
};
