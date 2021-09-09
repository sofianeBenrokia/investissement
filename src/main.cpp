#include "include.hpp"

int main(int argc , char **argv)
    {
        SDL_Init(SDL_INIT_VIDEO);

        SDL_SetRenderDrawColor(render,0,0,0,255);

        window_and_render.new_window_and_render("test",
                                               x_axis,
                                               y_axis,
                                               window_w,
                                               window_h,
                                               SDL_WINDOW_BORDERLESS);

        init_texture();

        unsigned long long start = 0 ;
        unsigned int end = 0 ;

        init_text();
        
        while(program_is_running)
            {
                start = SDL_GetTicks();
                
                updayte_event();
                
                updayte_texture();
                
                updayte_render();
                
                end = SDL_GetTicks() - start ;
                
                if(16 > start)
                    SDL_Delay(end);
            }
        return 0 ;
    }