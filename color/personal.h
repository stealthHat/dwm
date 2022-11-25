static const char black[] = "#000000";
static const char white[] = "#FFFFFF";
static const char red[] = "#FF0000";
static const char light_skyblue[] = "#87cefa";

static const char *colors[][3] = {
    /*               fg         bg         border   */
    [SchemeNorm] = {white, black, black},
    [SchemeSel] = {black, light_skyblue, light_skyblue},
};
