//Modify this file to change what commands output to your statusbar, and recompile using the make command.
// N=34+(upd signal) -> ; kill -N $(pidof dwmblocks)
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	//{"",	"news",		0,	6},
        //{"",	"crypto",	0,	13},
	//{"",	"torrent",	20,	7},
        //{"",	"moonphase",	18000,	17},
	//{"",	"mailbox",	180,	12},
        //{"",	"pacpackages",	0,	8},
	//{"",	"battery",	5,	3},
        //{"",	"internet",	5,	4},
	//{"",	"help-icon",	0,	15},
        {"",	"music bar",	0,	11},
        //{"",	"rate_stat 22 _1",	300,	22},
        {"",	"loadavg",	10,	23},
        {"",	"cpu",		10,	18},
        {"",	"memory",	10,	14},
        {"",	"wttr_s",       3600,	5},
        {"",	"packet_loss 1m" ,	5,	27},
        {"",	"packet_loss 5m" ,	10,	28},
        {"",	"packet_loss 15m",	60,	29},
        {"",	"nettraf",	5,	16},
        {"",	"pulse_preset",	0,	19},
        {"",	"volume_sink $SINK0",	0,	9},
        {"",	"volume_sink $SINK1",	0,	10},
        {"",	"packupd",	0,	8},
        {"",	"clock",	60,	1},
        {"",	"printf ';'",	0,	26},
        {"",	"rate_top 3 gain 24",	5,	24},
        {"",	"rate_top 3 lose 25",	5,	25},
        {"",	"rate_stat 21 _0",	300,	21},
        //{"",	"rate_stat 21 _0",	300,	21},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
