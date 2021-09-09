#include "include.hpp"

Init_window_and_render::~Init_window_and_render()
    {
        clear();
    }

void Init_window_and_render::clear()
    {
        SDL_DestroyWindow(window);
        window = NULL ;

        SDL_DestroyRenderer(render);
        render = NULL ;

        SDL_Quit;
    }

void Init_window_and_render::new_window_and_render(char const *name , int x , int y , int w , int h , int mode)
    {
        if(window != NULL)
            SDL_DestroyWindow(window);
        
        window = SDL_CreateWindow(name , x , y , w ,h , mode );

        if(window == NULL)
            error("the window did not open");

        if(render != NULL)
            SDL_DestroyRenderer(render);
        
        render = SDL_CreateRenderer(window , -1 , 0);

        if(render == NULL)
            error("the render did not open");
    }


void init_texture()
    {
        exit_1.set_xy(window_w - 35 , 3);
        exit_1.new_texture("pictures/exit1.bmp");
        exit_2.set_xy(window_w - 35 , 3);
        exit_2.new_texture("pictures/exit2.bmp");
        exit_3.set_xy(window_w - 35 , 3);
        exit_3.new_texture("pictures/exit3.bmp");
        maximize_1.set_xy(window_w - 70 , 3);
        maximize_1.new_texture("pictures/maximized1.bmp");
        maximize_2.set_xy(window_w - 70 , 3);
        maximize_2.new_texture("pictures/maximized2.bmp");
        maximize_3.set_xy(window_w - 70 , 3);
        maximize_3.new_texture("pictures/maximized3.bmp");
        minimize_1.set_xy(window_w - 70 , 3);
        minimize_1.new_texture("pictures/minimized1.bmp");
        minimize_2.set_xy(window_w - 70 , 3);
        minimize_2.new_texture("pictures/minimized2.bmp");
        minimize_3.set_xy(window_w - 70 , 3);
        minimize_3.new_texture("pictures/minimized3.bmp");
        hide_1.set_xy(window_w -105 , 3);
        hide_1.new_texture("pictures/hidden1.bmp");
        hide_2.set_xy(window_w -105 , 3);
        hide_2.new_texture("pictures/hidden2.bmp");
        hide_3.set_xy(window_w -105 , 3);
        hide_3.new_texture("pictures/hidden3.bmp");
        option.init_button("pictures/option.bmp",250-35,30);
        border[0].init_border("patate voiture",0);
        border[1].init_border("test",1);
        
    }

void init_text()
    {
        text_green_15pxl.init_text("pictures/character/green_15_pxl");
        text_red_15pxl.init_text("pictures/character/red_15_pxl");
        text_white_15pxl.init_text("pictures/character/White_15_pxl");
    }