/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_STANDARD;
char *IEEE_P_3564397177;
char *STD_TEXTIO;
char *IEEE_P_2592010699;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002819932201_0536025237_init();
    work_m_00000000001477677550_2447195422_init();
    work_m_00000000001963473224_3648916189_init();
    work_m_00000000001895379848_3970665056_init();
    work_m_00000000001818656750_2625410860_init();
    work_m_00000000003712891479_3683860065_init();
    work_m_00000000002202863847_3671711236_init();
    work_m_00000000004134447467_2073120511_init();
    ieee_p_2592010699_init();
    std_textio_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_3564397177_init();
    xilinxcorelib_a_1402655843_2959432447_init();
    xilinxcorelib_a_0344531608_2959432447_init();
    xilinxcorelib_a_2817327874_1709443946_init();
    xilinxcorelib_a_4193898364_0543512595_init();
    xilinxcorelib_a_4122332040_3212880686_init();
    work_a_2880295125_0502138897_init();
    xilinxcorelib_a_0591029581_2959432447_init();
    xilinxcorelib_a_1680446390_2959432447_init();
    xilinxcorelib_a_0489611847_1709443946_init();
    xilinxcorelib_a_1460441435_0543512595_init();
    xilinxcorelib_a_4020948987_3212880686_init();
    work_a_2859622412_3677427432_init();
    xilinxcorelib_a_0095313643_2959432447_init();
    xilinxcorelib_a_2788718247_2959432447_init();
    xilinxcorelib_a_0134097342_1709443946_init();
    xilinxcorelib_a_0880069918_0543512595_init();
    xilinxcorelib_a_0197195036_3212880686_init();
    work_a_2932262082_2068867259_init();
    xilinxcorelib_a_3641242517_2959432447_init();
    xilinxcorelib_a_2057231321_2959432447_init();
    xilinxcorelib_a_3174942971_1709443946_init();
    xilinxcorelib_a_1854299930_0543512595_init();
    xilinxcorelib_a_3189653420_3212880686_init();
    work_a_0523577988_2031185258_init();
    xilinxcorelib_a_0924973883_2959432447_init();
    xilinxcorelib_a_2495075191_2959432447_init();
    xilinxcorelib_a_2405508550_1709443946_init();
    xilinxcorelib_a_1347089828_0543512595_init();
    xilinxcorelib_a_0988625010_3212880686_init();
    work_a_2077013228_2476324490_init();


    xsi_register_tops("work_m_00000000002202863847_3671711236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");

    return xsi_run_simulation(argc, argv);

}
