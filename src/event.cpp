#include "include.hpp"

void updayte_event()
    {
        while(SDL_PollEvent(&event))
            {
                mouse_on_exit = 0 ;
                mouse_on_maximize_or_minimize = 0 ;
                mouse_on_hiden = 0 ;
                option.status_reset();
                test = false ;
                window_event();
                mouse_event();
                keyboard_event();
            }
    }

//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
//HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ

void window_event()
    {
        if(event.type == SDL_QUIT)
            program_is_running = false ;
    }

//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
//HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ

void mouse_event()
    {
        mouse_motion();
        mouse_button();
    }

void mouse_motion()
    {
        if(event.motion.x <= window_w && event.motion.x > window_w - 35 && event.motion.y <= 28 && event.motion.y >= 0)
            mouse_on_exit ++ ;
        
        if(event.motion.x <= window_w - 35 && event.motion.x > window_w - 70 && event.motion.y <= 28 && event.motion.y >= 0)
            mouse_on_maximize_or_minimize ++ ;
        
        if(event.motion.x <= window_w - 70 && event.motion.x > window_w - 105 && event.motion.y <= 28 && event.motion.y >= 0)
            mouse_on_hiden ++ ;

        if(event.motion.x <= 250 && event.motion.x > 250-35 && event.motion.y <= 60 && event.motion.y >= 30)
            option.status_change();

        if(event.motion.x <= 250 && event.motion.x > -1 && event.motion.y <= 98 && event.motion.y >= 60)
            test = true ;
    }       

void mouse_button()
    {       
        if(event.button.button == SDL_BUTTON_LEFT || event.button.state == SDL_PRESSED)
            {
                if(event.motion.x <= window_w && event.motion.x > window_w - 35 && event.motion.y <= 28 && event.motion.y >= 0)
                    mouse_on_exit ++ ;
                if(event.motion.x <= window_w - 35 && event.motion.x > window_w - 70 && event.motion.y <= 28 && event.motion.y >= 0)
                    mouse_on_maximize_or_minimize ++ ; 
                if(event.motion.x <= window_w - 70 && event.motion.x > window_w - 105 && event.motion.y <= 28 && event.motion.y >= 0)
                    mouse_on_hiden ++ ;
                if(event.motion.x <= 250 && event.motion.x > 250-35 && event.motion.y <= 60 && event.motion.y >= 30)
                    option.status_change();
            }
            
        if(event.type == SDL_MOUSEBUTTONUP)
            {
                if(event.button.button == SDL_BUTTON_LEFT)
                    {
                        if(event.button.x <= window_w && event.button.x > window_w - 35 && event.button.y <= 28 && event.button.y >= 0)
                            program_is_running = false ;
                        
                        if(event.button.x <= window_w -35 && event.button.x > window_w - 70 && event.button.y <= 28 && event.button.y >= 0)
                            if(maximize)
                                {
                                    SDL_SetWindowPosition(window,
                                                         x_axis,
                                                         y_axis);
                                    SDL_SetWindowSize(window,
                                                     window_old_w,
                                                     window_old_h);
                                    window_w = window_old_w ;
                                    window_h = window_old_h ;
                                    init_texture();
                                    maximize = false ;
                                }
                                else
                                    {
                                        SDL_SetWindowPosition(window,0,0);
                                        SDL_SetWindowSize(window,
                                                         GetSystemMetrics(SM_CXSCREEN),
                                                         GetSystemMetrics(SM_CYSCREEN));
                                        window_old_w = window_w ;
                                        window_old_h = window_h ;
                                        window_w = GetSystemMetrics(SM_CXSCREEN) ;
                                        window_h = GetSystemMetrics(SM_CYSCREEN) ;
                                        init_texture();
                                        maximize = true ;
                                    }
                        if(event.button.x <= window_w - 70 && event.button.x > window_w - 105 && event.button.y <= 28 && event.button.y >= 0)
                            SDL_MinimizeWindow(window);
                    }
            }
    }

//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
//HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ

void keyboard_event()
    {
        if(event.type == SDL_KEYDOWN)
            {
                if(event.key.keysym.sym == SDLK_v)
                    program_is_running = false ;
                
                if(event.key.keysym.sym == SDLK_q)
                    {
                        SDL_SetWindowPosition(window,0,0);
                        SDL_SetWindowSize(window,
                                         GetSystemMetrics(SM_CXSCREEN),
                                         GetSystemMetrics(SM_CYSCREEN));
                        window_old_w = window_w ;
                        window_old_h = window_h ;
                        window_w = GetSystemMetrics(SM_CXSCREEN) ;
                        window_h = GetSystemMetrics(SM_CYSCREEN) ;
                        init_texture();
                        maximize = true ;
                    }

                if(event.key.keysym.sym == SDLK_w)
                    {
                        SDL_SetWindowPosition(window,
                                             x_axis,
                                             y_axis);
                        SDL_SetWindowSize(window,
                                         window_old_w,
                                         window_old_h);
                        window_w = window_old_w ;
                        window_h = window_old_h ;
                        init_texture();
                        maximize = false ;
                    }
            }
    }

void error(char const *TEXT)
    {
        LOG("   ERROR: "<<TEXT);
        
        program_is_running = false ;
    }