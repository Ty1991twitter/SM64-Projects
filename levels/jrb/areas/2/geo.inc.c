// 0x0E000AFC
const GeoLayout jrb_geo_000AFC[] = {
   GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND_COLOR(0x0001),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 10000, geo_camera_fov),
         GEO_OPEN_NODE(),
            GEO_CAMERA(16, 0, 2000, 6000, 0, 0, 0, geo_camera_main),
            GEO_OPEN_NODE(),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, jrb_seg7_dl_0700EF00),
               GEO_DISPLAY_LIST(LAYER_ALPHA, jrb_seg7_dl_0700FE48),
               GEO_DISPLAY_LIST(LAYER_OPAQUE, jrb_seg7_dl_07010548),
               GEO_ASM(   0, geo_movtex_pause_control),
               GEO_ASM(0x1202, geo_movtex_draw_water_regions),
               GEO_RENDER_OBJ(),
               GEO_ASM(   2, geo_envfx_main),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
