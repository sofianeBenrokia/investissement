#include "include.hpp"
#include <array>

// window + render + event declaration

SDL_Window *window = NULL;

SDL_Renderer *render = NULL;

Init_window_and_render window_and_render ;

SDL_Event event ;

// bool declaration

bool program_is_running = true ;

bool maximize = false ;

bool test = false ;

// int declaration

int mouse_on_exit = 0 ;

int mouse_on_maximize_or_minimize = 0 ;

int mouse_on_hiden = 0 ;
// window int declaration

int window_w = 1280 ;

int window_h = 720 ;

int x_axis = (GetSystemMetrics(SM_CXSCREEN) - window_w) / 2 ;

int y_axis = (GetSystemMetrics(SM_CYSCREEN) - window_h) / 2 ;

int window_old_w ;

int window_old_h ;

// text decleration

Text text_green_15pxl ;

Text text_red_15pxl ;

Text text_white_15pxl ;

// texture declaration

Texture exit_1 ;

Texture exit_2 ;

Texture exit_3 ;

Texture maximize_1 ;

Texture maximize_2 ;

Texture maximize_3 ;

Texture minimize_1 ;

Texture minimize_2 ;

Texture minimize_3 ;

Texture hide_1 ;

Texture hide_2 ;

Texture hide_3 ;

Button option ;

Border border[2] ;