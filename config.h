//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"",	"music",	0,	11},*/
	{"",	"internet",	1,	4},
	{"",	"news",		0,	6},
	/* {"",	"pacpackages",	0,	8}, */
	/* {"",	"torrent",	20,	7}, */
	{"",	"disk",		1,	0},
	{"",	"battery",	1,	0},
	/* {"",	"brightness",	1,	0}, */
	{"",	"volume",	1,	3},
	{"",	"silence",	1,	2},
	{"",	"date +'%R %d/%m/%Y'",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
