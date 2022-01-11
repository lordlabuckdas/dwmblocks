//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0}, */
	{"", "$HOME/dwmblocks/scripts/volume_bar", 30, 0},
	/* {"", "$HOME/dwmblocks/scripts/net_bar", 120, 0}, */
	{"", "$HOME/dwmblocks/scripts/power_bar", 180, 0},
	/* {"", "$HOME/dwmblocks/scripts/clock_bar", 60, 0}, */
	{" ", "date '+%b %d, %a'", 60*60, 0},
	{" ", "date '+%I:%M%p '", 60, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
