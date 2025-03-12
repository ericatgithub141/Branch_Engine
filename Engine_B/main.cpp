#include<iostream>
#include<SDL3/SDL.h>

int main()
{
	if (!SDL_Init(SDL_INIT_VIDEO))
	{
		std::cout << "Failed to initalize: " << SDL_GetError() << std::endl;
		exit(-1);
	}
	SDL_Window* window = SDL_CreateWindow("Branch Engine", 1280, 720, NULL);
	if (!window)
	{
		std::cout << "Failed to create window: " << SDL_GetError() << std::endl;
		exit(-1);
	}
	SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);
	bool running = true;
	while (running)
	{
		SDL_Event event;
		SDL_RenderPresent(renderer);
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_EVENT_QUIT)
			{
				running = false;
			}
		}
	}
	SDL_DestroyWindow(window);
	SDL_Quit();
}