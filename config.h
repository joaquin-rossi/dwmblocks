//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"internet-statusbar",	1,	4},
	{"",	"news-statusbar",		0,	6},
	{"",	"disk-statusbar",		1,	0},
	{"",	"battery-statusbar",	1,	0},
	/* {"",	"brightness-statusbar",	1,	0}, */
	{"",	"volume-statusbar",	1,	3},
	{"",	"silence-statusbar",	1,	2},
	{"",	"date +'%R %d/%m/%Y'",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
