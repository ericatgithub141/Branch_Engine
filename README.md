# Branch_Engine

This repository provides a basic template for setting up an SDL2 project in C++ with Visual Studio 2022. It offers a starting point for developing games or other graphical applications using SDL2.

## Features

* **Pre-configured project settings:** Ready-to-use Visual Studio 2022 solution and project files.
* **Basic SDL2 initialization:** Includes code for initializing SDL2, creating a window, and a renderer.
* **Game loop foundation:** Provides a basic game loop structure for handling events, updating game logic, and rendering.
* **Clear and concise code:** Well-commented and organized code for easy understanding and modification.

## Getting Started

1. **Install SDL2:**
   - Download the SDL2 development libraries from the official website: https://www.libsdl.org/download-2.0.php
   - Extract the downloaded archive to a location of your choice.

2. **Set up the project in Visual Studio 2022:**
   - Open the `SDLTemplate.sln` solution file in Visual Studio 2022.
   - In the project properties, under **VC++ Directories**:
     - Add the include directory of your SDL2 installation to **Include Directories**.
     - Add the lib directory of your SDL2 installation to **Library Directories**.
   - Under **Linker** -> **Input**, add `SDL2.lib` and `SDL2main.lib` to **Additional Dependencies**.

3. **Build and run the project:**
   - Build the solution (**Build** -> **Build Solution**).
   - Run the project (**Debug** -> **Start Without Debugging**).

## Usage

The template provides a basic game loop structure:

```cpp
int main(int argc, char* args) {
    // Initialize SDL
    // ...

    // Create window and renderer
    // ...

    // Game loop
    bool quit = false;
    SDL_Event e;
    while (!quit) {
        // Handle events
        while (SDL_PollEvent(&e) != 0) {
            // ...
        }

        // Update game logic
        // ...

        // Clear screen
        // ...

        // Render objects
        // ...

        // Update screen
        // ...
    }

    // Clean up and quit
    // ...

    return 0;
}
