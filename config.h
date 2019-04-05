const unsigned int interval = 1000;
#define MAXLEN 2048
static const char unknown_str[] = "n/a";
static const struct arg args[] = {
	{keyboard_indicators,"%s" ,"c n"},
	{ wifi_perc, "%3s%%) ", "wlp0s20u3" },
	{ ipv4, "%s | ", "wlp0s20u3" },
	{ run_command, "Volume: %4s | ", "amixer -c 1 -- sget Master | awk -F\"[][]\" '/%/ { print $2 }' | head -n1" },
	{ battery_perc, "Battery: %3s%% ", "BAT1" },
	{ datetime, "%s", "[%a] %F %T " },
	

};
