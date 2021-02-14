static const Block blocks[] =
{
    /* icon command interval signal */
    {"", "volume", 1, 1},
    {"IP:", "public-ip", 1, 0},
    {" ", "disk-usage /", 60, 0},
    {" ", "disk-usage $HOME", 60, 0},
    {"", "date +'%R %d/%m/%Y'", 5, 0},
};

/* delimeter between status commands */
static char *delim = " ";
