#define TICKS_PER_SECOND 30
#define WORLD_SIZE 10
#define VELOCITY_DROPOFF 0.8
#define MAX_VELOCITY 1.
#define MAX_LIGHTS 10

struct block {
    int exists; // 0 means the block is empty, 1 means it is not
    float r;
    float g;
    float b;
    float a;
    float light; // Intensity of light
};

struct player {
    // Position
    float x;
    float y;
    float z;
    float ah; // horizontal angle
    float av; // vertical angle
    // Velocity
    float vx;
    float vy;
    float vz;
    // Color
    float r;
    float g;
    float b;
};

struct light {
    int exists;
    float x;
    float y;
    float z;
};

// NOTE: There are a lot of good reasons to use const variables instead
// of #define's.  However, Visual C++ does not allow a const variable
// to be used as an array size or as the case in a switch( ) statement.  So in
// the following, all constants are const variables except those which need to
// be array sizes or cases in switch( ) statements.  Those are #defines.

// title of these windows:

const char *WINDOWTITLE = { "Final Project -- Sean Rettig" };
const char *GLUITITLE   = { "User Interface Window" };


// what the glui package defines as true and false:

const int GLUITRUE  = { true  };
const int GLUIFALSE = { false };


// the escape key:

#define ESCAPE  0x1b


// initial window size:

const int INIT_WINDOW_SIZE = { 600 };


// size of the box:

const float BOXSIZE = { 2.f };



// multiplication factors for input interaction:
//  (these are known from previous experience)

const float ANGFACT = { 1. };
const float SCLFACT = { 0.005f };


// minimum allowable scale factor:

const float MINSCALE = { 0.05f };


// active mouse buttons (or them together):

const int LEFT   = { 4 };
const int MIDDLE = { 2 };
const int RIGHT  = { 1 };


// which projection:

enum Projections
{
    ORTHO,
    PERSP
};

// which button:

enum ButtonVals
{
    RESET,
    QUIT
};


// window background color (rgba):

const GLfloat BACKCOLOR[ ] = { .5, .7, 1., 1. };


// line width for the axes:

const GLfloat AXES_WIDTH   = { 3. };


// the color numbers:
// this order must match the radio button order

enum Colors
{
    RED,
    YELLOW,
    GREEN,
    CYAN,
    BLUE,
    MAGENTA,
    WHITE,
    BLACK
};

char * ColorNames[ ] =
{
    "Red",
    "Yellow",
    "Green",
    "Cyan",
    "Blue",
    "Magenta",
    "White",
    "Black"
};


// the color definitions:
// this order must match the menu order

const GLfloat Colors[ ][3] = 
{
    { 1., 0., 0. },  // red
    { 1., 1., 0. },  // yellow
    { 0., 1., 0. },  // green
    { 0., 1., 1. },  // cyan
    { 0., 0., 1. },  // blue
    { 1., 0., 1. },  // magenta
    { 1., 1., 1. },  // white
    { 0., 0., 0. },  // black
};


// fog parameters:

const GLfloat FOGCOLOR[4] = { .0, .0, .0, 1. };
const GLenum  FOGMODE     = { GL_LINEAR };
const GLfloat FOGDENSITY  = { 0.30f };
const GLfloat FOGSTART    = { 1.5 };
const GLfloat FOGEND      = { 4. };
