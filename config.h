/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"DroidSansMono Nerd Font:size=20"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	/* [SchemeSel] = { "#eeeeee", "#005577" }, */
	[SchemeSel] = { "#eeeeee", "#37474F" },

	/* [SchemeSelHighlight] = { "#ffc978", "#005577" }, */
	[SchemeSelHighlight] = { "#ffc978", "#37474F" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
static unsigned int lineheight = 4;         /* -h option; minimum height of a menu line     */
 

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
