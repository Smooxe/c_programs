#include<stdio.h>
#include<SDL2/SDL.h>

// true, false boolean
#define TRUE            1
#define FALSE           0
// window width and height
#define SCREEN_WIDTH    600
#define SCREEN_HEIGHT   600
// assigned intractable keys
enum key_press_surfaces{
    KP_SURFACE_DEFUALT,
    KP_SURFACE_UP,
    KP_SURFACE_DOWN,
    KP_SURFACE_LEFT,
    KP_SURFACE_RIGHT,
    KP_SURFACE_TOTAL
};

SDL_Window  *g_window =         NULL;
SDL_Surface *g_screen_surface = NULL;
SDL_Surface *g_image =          NULL;

int init();
int load_media();
SDL_Surface load_surface(char *img);
void close();

int main(int argc, char *argv[]){

    if(!init()){ printf("failed to init.\n"); }
    if(!load_media()){ printf("failed to load media.\n"); }
    else{
        int quit = FALSE;
        SDL_Event e;

        while(!quit){
            while(SDL_PollEvent(&e) != 0){
                if(e.type == SDL_QUIT){ quit = TRUE; }
                else if(e.type == SDL_KEYDOWN){

                }
            }
            SDL_BlitSurface(g_image, NULL, g_screen_surface, NULL);
            SDL_UpdateWindowSurface(g_window);
            SDL_Delay(1000/60);
        }

    }

    close();

    return 0;
}

// initialize sdl, windows, and any surfaces used for holding image data
int init(){
    // initialize sdl
    if(SDL_Init(SDL_INIT_VIDEO) != 0){ printf("failed to init sdl. SDL_Error: %s\n", SDL_GetError()); return FALSE; }
    else{
        // create window
        g_window = SDL_CreateWindow("LAZYFOO_TUT", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if(!g_window){ printf("failed to create window. SDL_Error: %s\n", SDL_GetError()); return FALSE; }
        else{ g_screen_surface = SDL_GetWindowSurface(g_window); }

        return TRUE;
    }
}

// load images
int load_media(char *img_file){
    // the location of the image that will be shown on screen
    g_image = SDL_LoadBMP(img_file);
    if(!g_image){ printf("failed to load image: %s. SDL_Error: %s\n", img_file, SDL_GetError()); return FALSE; }

    return TRUE;
}

// clean up and quit application
void close(){
    SDL_FreeSurface(g_image);       g_image  = NULL;
    SDL_DestroyWindow(g_window);    g_window = NULL;
    SDL_Quit();
}






























