//Modify this file to change what commands output to your statusbar, and recompile using the make command.
#define NUMCOLORS 10
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "kbselect", 0, 30}, */
	/*{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},*/
	//{"",	"pacpackages",	1000,	4},
	//{"",	"news",		100,	6},
	/* {"",	"crypto",	0,	13}, */
	/* {"",	"price lbc \"LBRY Token\" 📚",			9000,	22}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"price eth Ethereum 🍸",	9000,	23}, */
	/* {"",	"price btc Bitcoin 💰",				9000,	21}, */
	/* {"",	"torrent",	20,	7}, */
	{"",	"music",	0,	11},
	 {" ",	"memory",	10,	14},
	/* {"",	"cpu",		10,	18}, */
	/* {"",	"moonphase",	18000,	17}, */
	/*{"",	"forecast",	18000,	5}, */
	//{"",	"mailbox",	180,	0},
	/*{"",	"nettraf",	1,	16}, */
	{"",	"volume",	0,	10},
	{"",	"battery",	5,	3},
	{"",	"clock",	1,	1},
	{"",	"internet",	5,	8},
	{"",	"music-void",	0,	11},
	/*{"",	"help-icon",	0,	15},*/
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
