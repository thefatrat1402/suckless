/* user and group to drop privileges to */

static const char *user  = "gabru";
static const char *group = "gabru";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#076678",   /* during input */
	[FAILED] = "#9d0006",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Enter Password";

/* text color */
static const char * text_color = "#000000";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
