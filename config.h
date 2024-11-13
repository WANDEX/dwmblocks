//Modify this file to change what commands output to your statusbar, and recompile using the make command.
// N=34+(upd signal) -> ; kill -N $(pidof dwmblocks)
static const Block blocks[] = {
    /*Icon  Command                     Update Interval Update Signal*/
    // {"",	"music-web",                        0,          12},
    {"",	"music bar",                        0,          11},
    {"",	"[ -r /tmp/recicon ] && cat /tmp/recicon", 0,   6},
    {"",	"loadavg",                          10,         23},
    {"",	"cpu",                              10,         18},
    {"",	"memory",                           10,         14},
    {"",	"wttrs 5",                          3600,       5},
    // {"",	"packet_loss 1m" ,                  5,          27},
    // {"",	"packet_loss 5m" ,                  10,         28},
    // {"",	"packet_loss 15m",                  60,         29},
    {"",	"nettraf 5",                        5,          16},
    {"",	"effects_preset",                   0,          15},
    {"",	"volume_sink $SINK0",               0,          9},
    {"",	"volume_sink $SINK1",               0,          10},
    {"",	"packupd",                          0,          8},
    {"",	"clock",                            60,         1},
    {"",	"printf '%s' ';'",                  0,          26},
    // {"",	"printf '%s' '^v^^C3^'",            0,          31},
    // {"",	"rate_top 24 4 gain",               5,          24},
    // {"",	"rate_top 25 4 lose",               5,          25},
    // {"",	"printf '%s' '^t^'",                0,          32},
    // {"",	"rate_stat 21 _0",                  300,        21},
    // {"",	"rate_stat 22 _1",                  300,        22},
    {"",	"stats",                            1800,       34},
    {"",	"stext '' 0",                       10,         33},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:
// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
