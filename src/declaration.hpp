#ifndef __TEXTURE_AND_DRAW_DECLARATION_HPP__
#define __TEXTURE_AND_DRAW_DECLARATION_HPP__

// window + render + event declaration

extern SDL_Window *window ;

extern SDL_Renderer *render ;

extern Init_window_and_render window_and_render ;

extern SDL_Event event ;

// bool declaration

extern bool program_is_running ;

extern bool maximize ;

extern bool test ;

// int declaration

extern int mouse_on_exit ;

extern int mouse_on_maximize_or_minimize ;

extern int mouse_on_hiden ;

// window int declaration

extern int x_axis ;

extern int y_axis ;

extern int window_w ;

extern int window_h ;

extern int window_old_w ;

extern int window_old_h ;

// text decleration

extern Text text_green_15pxl ;

extern Text text_red_15pxl ;

extern Text text_white_15pxl ;

// texture declaration

extern Texture exit_1 ;

extern Texture exit_2 ;

extern Texture exit_3 ;

extern Texture maximize_1 ;

extern Texture maximize_2 ;

extern Texture maximize_3 ;

extern Texture minimize_1 ;

extern Texture minimize_2 ;

extern Texture minimize_3 ;

extern Texture hide_1 ;

extern Texture hide_2 ;

extern Texture hide_3 ;

extern Button option ;

extern Border border[2] ;

#endif