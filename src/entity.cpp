#include "include.hpp"

void Button::init_button(char const *path , int x , int y)
    {
        m_x = x ;
        m_y = y ;
        m_texture.set_xy( m_x , m_y );
        m_texture.new_texture(path);
    }

void Button::print_button()
    {
        if(m_status == 0)
            {
                m_texture.print_texture();
            }
            else if(m_status == 1)
                    {
                        draw_rectangle(83,85,75,255, m_x , m_y , m_texture.get_w() , m_texture.get_h());
                        m_texture.print_texture();
                    }
                    else
                        {
                            draw_rectangle(73,75,65,255, m_x , m_y , m_texture.get_w() , m_texture.get_h());
                            m_texture.print_texture();
                        }
    }

void Button::status_change()
    {
        m_status ++;
    }

void Button::status_reset()
    {
        m_status = 0 ;
    }

//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
//HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ

void Border::init_border(std::string name , int position)
    {
        m_texture.new_texture("pictures/baure.bmp");
        m_y = 60 + 38 * position ;
        m_texture.set_xy( 0 , m_y );
        m_name = name ;
    }

void Border::print_border()
    {
        m_texture.print_texture();
        text_white_15pxl.print_text(m_name, (250-text_white_15pxl.get_w(m_name)) /2 , m_y + 12);
        print_the_top(249 , 50);
    }

void Border::print_the_top_green(int w)
    {
        if(w < 1)
            return ;
        if(w == 1)
            {
                draw_rectangle(0,255,0,255,1,m_y + 5 , 1 , 3);
                return ;
            }
        if(w == 2)
            {
                draw_rectangle(0,255,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(0,255,0,255,2,m_y + 3 , 1 , 5);
                return ;
            }
        if(w==3)
            {
                draw_rectangle(0,255,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(0,255,0,255,2,m_y + 3 , 2 , 5);
                return ;
            }
        if(w < 247)
            {
                draw_rectangle(0,255,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(0,255,0,255,2,m_y + 3 , 2 , 5);
                draw_rectangle(0,255,0,255,4,m_y + 2 , w - 3 , 6);
                return ;
            }
        if(w == 247)
            {
                draw_rectangle(0,255,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(0,255,0,255,2,m_y + 3 , 2 , 5);
                draw_rectangle(0,255,0,255,4,m_y + 2 , 243 , 6);
                draw_rectangle(0,255,0,255,247,m_y + 3 , 1 , 5);
                return ;
            }
        if(w == 248)
            {
                draw_rectangle(0,255,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(0,255,0,255,2,m_y + 3 , 2 , 5);
                draw_rectangle(0,255,0,255,4,m_y + 2 , 243 , 6);
                draw_rectangle(0,255,0,255,247,m_y + 3 , 2 , 5);
                return ;
            }
        if(w == 249)
            {
                draw_rectangle(0,255,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(0,255,0,255,2,m_y + 3 , 2 , 5);
                draw_rectangle(0,255,0,255,4,m_y + 2 , 243 , 6);
                draw_rectangle(0,255,0,255,247,m_y + 3 , 2 , 5);
                draw_rectangle(0,255,0,255,249,m_y + 5 , 1 , 3);
                return ;
            }
    }

void Border::print_the_top_red(int w)
    {
        if(w < 1)
            return ;
        if(w == 1)
            {
                draw_rectangle(255,0,0,255,1,m_y + 5 , 1 , 3);
                return ;
            }
        if(w == 2)
            {
                draw_rectangle(255,0,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(255,0,0,255,2,m_y + 3 , 1 , 5);
                return ;
            }
        if(w==3)
            {
                draw_rectangle(255,0,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(255,0,0,255,2,m_y + 3 , 2 , 5);
                return ;
            }
        if(w < 247)
            {
                draw_rectangle(255,0,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(255,0,0,255,2,m_y + 3 , 2 , 5);
                draw_rectangle(255,0,0,255,4,m_y + 2 , w - 3 , 6);
                return ;
            }
        if(w == 247)
            {
                draw_rectangle(255,0,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(255,0,0,255,2,m_y + 3 , 2 , 5);
                draw_rectangle(255,0,0,255,4,m_y + 2 , 243 , 6);
                draw_rectangle(255,0,0,255,247,m_y + 3 , 1 , 5);
                return ;
            }
        if(w == 248)
            {
                draw_rectangle(255,0,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(255,0,0,255,2,m_y + 3 , 2 , 5);
                draw_rectangle(255,0,0,255,4,m_y + 2 , 243 , 6);
                draw_rectangle(255,0,0,255,247,m_y + 3 , 2 , 5);
                return ;
            }
        if(w == 249)
            {
                draw_rectangle(255,0,0,255,1,m_y + 5 , 1 , 3);
                draw_rectangle(255,0,0,255,2,m_y + 3 , 2 , 5);
                draw_rectangle(255,0,0,255,4,m_y + 2 , 243 , 6);
                draw_rectangle(255,0,0,255,247,m_y + 3 , 2 , 5);
                draw_rectangle(255,0,0,255,249,m_y + 5 , 1 , 3);
                return ;
            }   
    }

void Border::print_the_top(int red , int green)
    {
        if(red < 0 || green < 0 || red > 250 || green > 250)
            return ;
        if(red < green)
            {
                print_the_top_green(green);
                print_the_top_red(red);
            }
            else if(red == green)
                    {
                        draw_rectangle(255,255,255,255,1,m_y + 5 , 1 , 3);
                        draw_rectangle(255,255,255,255,2,m_y + 3 , 2 , 5);
                        draw_rectangle(255,255,255,255,4,m_y + 2 , 243 , 6);
                        draw_rectangle(255,255,255,255,247,m_y + 3 , 2 , 5);
                        draw_rectangle(255,255,255,255,249,m_y + 5 , 1 , 3);   
                    }
                    else
                        {
                            print_the_top_red(red);
                            print_the_top_green(green);
                        }
    }

//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
//HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
//ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ

void Text::print_text(std::string text , int x , int y)
    {
        char charc ;
        int chari ;
        for( int i = 0 ; i < text.size() ; i++)
            {
                charc = text[i] ;
                chari = charc ;
                chari -= 32 ;
                if (chari > -1 && chari < 95)
                    {
                        character[chari].set_xy( x , y );
                        character[chari].print_texture();
                        x += character[chari].get_w();
                    }
            }
    }

int Text::get_w(std::string text)
    {
        char charc ;
        int chari ;
        int w = 0 ;
        for( int i = 0 ; i < text.size() ; i++)
            {
                charc = text[i] ;
                chari = charc ;
                chari -= 32 ;
                if(chari > -1 && chari < 95)
                    w += character[chari].get_w();
            }
        return w ;
    }

void Text::init_text(std::string path)
    {
        std::string temp = path + "/space.bmp";
        character[0].new_texture(temp.c_str());
        temp = path + "/!.bmp";
        character[1].new_texture(temp.c_str());
        temp = path + "/double_quote.bmp";
        character[2].new_texture(temp.c_str());
        temp = path + "/#.bmp";
        character[3].new_texture(temp.c_str());
        temp = path + "/$.bmp";
        character[4].new_texture(temp.c_str());
        temp = path + "/%.bmp";
        character[5].new_texture(temp.c_str());
        temp = path + "/&.bmp";
        character[6].new_texture(temp.c_str());
        temp = path + "/'.bmp";
        character[7].new_texture(temp.c_str());
        temp = path + "/(.bmp";
        character[8].new_texture(temp.c_str());
        temp = path + "/).bmp";
        character[9].new_texture(temp.c_str());
        temp = path + "/asterisk.bmp";
        character[10].new_texture(temp.c_str());
        temp = path + "/+.bmp";
        character[11].new_texture(temp.c_str());
        temp = path + "/,.bmp";
        character[12].new_texture(temp.c_str());
        temp = path + "/-.bmp";
        character[13].new_texture(temp.c_str());
        temp = path + "/point.bmp";
        character[14].new_texture(temp.c_str());
        temp = path + "/slash.bmp";
        character[15].new_texture(temp.c_str());
        temp = path + "/0.bmp";
        character[16].new_texture(temp.c_str());
        temp = path + "/1.bmp";
        character[17].new_texture(temp.c_str());
        temp = path + "/2.bmp";
        character[18].new_texture(temp.c_str());
        temp = path + "/3.bmp";
        character[19].new_texture(temp.c_str());
        temp = path + "/4.bmp";
        character[20].new_texture(temp.c_str());
        temp = path + "/5.bmp";
        character[21].new_texture(temp.c_str());
        temp = path + "/6.bmp";
        character[22].new_texture(temp.c_str());
        temp = path + "/7.bmp";
        character[23].new_texture(temp.c_str());
        temp = path + "/8.bmp";
        character[24].new_texture(temp.c_str());
        temp = path + "/9.bmp";
        character[25].new_texture(temp.c_str());
        temp = path + "/double_point.bmp";
        character[26].new_texture(temp.c_str());
        temp = path + "/;.bmp";
        character[27].new_texture(temp.c_str());
        temp = path + "/smaller_than.bmp";
        character[28].new_texture(temp.c_str());
        temp = path + "/=.bmp";
        character[29].new_texture(temp.c_str());
        temp = path + "/bigger_than.bmp";
        character[30].new_texture(temp.c_str());
        temp = path + "/interrogation_point.bmp";
        character[31].new_texture(temp.c_str());
        temp = path + "/@.bmp";
        character[32].new_texture(temp.c_str());
        temp = path + "/AM.bmp";
        character[33].new_texture(temp.c_str());
        temp = path + "/BM.bmp";
        character[34].new_texture(temp.c_str());
        temp = path + "/CM.bmp";
        character[35].new_texture(temp.c_str());
        temp = path + "/DM.bmp";
        character[36].new_texture(temp.c_str());
        temp = path + "/EM.bmp";
        character[37].new_texture(temp.c_str());
        temp = path + "/FM.bmp";
        character[38].new_texture(temp.c_str());
        temp = path + "/GM.bmp";
        character[39].new_texture(temp.c_str());
        temp = path + "/HM.bmp";
        character[40].new_texture(temp.c_str());
        temp = path + "/IM.bmp";
        character[41].new_texture(temp.c_str());
        temp = path + "/JM.bmp";
        character[42].new_texture(temp.c_str());
        temp = path + "/KM.bmp";
        character[43].new_texture(temp.c_str());
        temp = path + "/LM.bmp";
        character[44].new_texture(temp.c_str());
        temp = path + "/MM.bmp";
        character[45].new_texture(temp.c_str());
        temp = path + "/NM.bmp";
        character[46].new_texture(temp.c_str());
        temp = path + "/OM.bmp";
        character[47].new_texture(temp.c_str());
        temp = path + "/PM.bmp";
        character[48].new_texture(temp.c_str());
        temp = path + "/QM.bmp";
        character[49].new_texture(temp.c_str());
        temp = path + "/RM.bmp";
        character[50].new_texture(temp.c_str());
        temp = path + "/SM.bmp";
        character[51].new_texture(temp.c_str());
        temp = path + "/TM.bmp";
        character[52].new_texture(temp.c_str());
        temp = path + "/UM.bmp";
        character[53].new_texture(temp.c_str());
        temp = path + "/VM.bmp";
        character[54].new_texture(temp.c_str());
        temp = path + "/WM.bmp";
        character[55].new_texture(temp.c_str());
        temp = path + "/XM.bmp";
        character[56].new_texture(temp.c_str());
        temp = path + "/YM.bmp";
        character[57].new_texture(temp.c_str());
        temp = path + "/ZM.bmp";
        character[58].new_texture(temp.c_str());
        temp = path + "/[.bmp";
        character[59].new_texture(temp.c_str());
        temp = path + "/backslash.bmp";
        character[60].new_texture(temp.c_str());
        temp = path + "/].bmp";
        character[61].new_texture(temp.c_str());
        temp = path + "/^.bmp";
        character[62].new_texture(temp.c_str());
        temp = path + "/_.bmp";
        character[63].new_texture(temp.c_str());
        temp = path + "/`.bmp";
        character[64].new_texture(temp.c_str());
        temp = path + "/a.bmp";
        character[65].new_texture(temp.c_str());
        temp = path + "/b.bmp";
        character[66].new_texture(temp.c_str());
        temp = path + "/c.bmp";
        character[67].new_texture(temp.c_str());
        temp = path + "/d.bmp";
        character[68].new_texture(temp.c_str());
        temp = path + "/e.bmp";
        character[69].new_texture(temp.c_str());
        temp = path + "/f.bmp";
        character[70].new_texture(temp.c_str());
        temp = path + "/g.bmp";
        character[71].new_texture(temp.c_str());
        temp = path + "/h.bmp";
        character[72].new_texture(temp.c_str());
        temp = path + "/i.bmp";
        character[73].new_texture(temp.c_str());
        temp = path + "/j.bmp";
        character[74].new_texture(temp.c_str());
        temp = path + "/k.bmp";
        character[75].new_texture(temp.c_str());
        temp = path + "/l.bmp";
        character[76].new_texture(temp.c_str());
        temp = path + "/m.bmp";
        character[77].new_texture(temp.c_str());
        temp = path + "/n.bmp";
        character[78].new_texture(temp.c_str());
        temp = path + "/o.bmp";
        character[79].new_texture(temp.c_str());
        temp = path + "/p.bmp";
        character[80].new_texture(temp.c_str());
        temp = path + "/q.bmp";
        character[81].new_texture(temp.c_str());
        temp = path + "/r.bmp";
        character[82].new_texture(temp.c_str());
        temp = path + "/s.bmp";
        character[83].new_texture(temp.c_str());
        temp = path + "/t.bmp";
        character[84].new_texture(temp.c_str());
        temp = path + "/u.bmp";
        character[85].new_texture(temp.c_str());
        temp = path + "/v.bmp";
        character[86].new_texture(temp.c_str());
        temp = path + "/w.bmp";
        character[87].new_texture(temp.c_str());
        temp = path + "/x.bmp";
        character[88].new_texture(temp.c_str());
        temp = path + "/y.bmp";
        character[89].new_texture(temp.c_str());
        temp = path + "/z.bmp";
        character[90].new_texture(temp.c_str());
        temp = path + "/{.bmp";
        character[91].new_texture(temp.c_str());
        temp = path + "/or.bmp";
        character[92].new_texture(temp.c_str());
        temp = path + "/}.bmp";
        character[93].new_texture(temp.c_str());
        temp = path + "/tilde.bmp";
        character[94].new_texture(temp.c_str());
        
    }