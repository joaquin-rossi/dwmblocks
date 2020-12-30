static const Block blocks[] =
{
	/* icon command interval signal */
	{" ", "public-ip", 1, 0},
	{" ", "news", 0, 6},
	{" ", "disk-usage /", 60, 0},
	{" ", "disk-usage $HOME", 60, 0},
	{"", "volume", 1, 1},
	{"", "date +'%R %d/%m/%Y'",	5,	0},
};

/* delimeter between status commands */
static char *delim = " ";
