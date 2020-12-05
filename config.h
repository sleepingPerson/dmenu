static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"sans:size=22",
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* My colors */
static const char col_white[]       = "#dadada";
static const char col_gray[]        = "#585858";
static const char col_darkgray[]    = "#444444";
static const char col_orange[]      = "#ff8787";
static const char col_magenta[]     = "#d75fff";
static const char col_olive[]       = "#afaf87";
static const char col_cyan[]        = "#5fafd7";
static const char col_red[]         = "#ff005f";
static const char col_pink[]        = "#af5f5f";
static const char col_green[]       = "#87d75f";

static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { col_white, col_gray },
	[SchemeSel]  = { col_gray,  col_magenta },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /?\"&[]-.,";

