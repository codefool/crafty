Welcome to the Crafty Computer
Chess program web page!

Crafty 25.2 is the current stable release.


Crafty
Crafty is a free, open-source computer chess program developed by Dr. Robert M. (Bob) Hyatt.  
Crafty has been retired for some time, and may not be updated anymore.


Downloads
=========
Many versions of Crafty can be downloaded here <https://craftychess.com/downloads/source/>.  
The version numbers are of the form major.minor.bugfix where there are very few "bugfix" 
versions.  The most recent is always the highest major version, and within that major version, 
the highest minor version.  Note that xx.2 is lower than xx.12.  These are source-only 
distributions.  They come with a Makefile that will generally work under windows (Makefile.nt) 
and most Unix systems (Makefile) although either will likely need some editing to properly 
choose the correct hardware options.

There are several directories here that contain useful information:

You can find most old Crafty source versions here <https://craftychess.com/downloads/source/>.  
Note that there are NO executable files distributed on this web site, although many kind Crafty 
users make executables available for at least Windows, Linux and MacOS machines.

You can find the source code for a version of Cray Blitz that dates back to approximately 1989 
here <https://craftychess.com/downloads/source/>.  Note that this is Fortran 77 source code 
although it can be compiled with the GNU fortran compiler easily.

You can find documentation here <https://craftychess.com/documentation/craftydoc.html>.  While 
Crafty has a pretty complete "help" command, this gives an ASCII, postscript and troff/nroff 
versions of the documentation, along with a text file describing how to operate crafty in a 
"manual tournament" such as the WCCC events.

You can find the opening book files here <https://craftychess.com/downloads/book/>.  "book.bin" 
is the main book file which can be re-created by using the file "book.pgn" (after it is 
uncompressed) as input.  You can also create a bookc.bin (suggested opening lines when playing 
against a computer) and books.bin (suggested opening lines when Crafty doesn't know (or doesn't 
think) it is playing against a computer.  They are not mandatory.

Usage
=====
Crafty can be compiled and executed from a terminal window on a Macintosh, Windows or Linux 
computer.  Crafty can also be run with a GUI interface such as 
Winboard <http://www.gnu.org/software/xboard/#tag-A1>(Windows) or 
Xboard <http://www.gnu.org/software/xboard/>(Linux).


GUI
===
Valters Baumanis has written his own Crafty Chess interface that be downloaded here 
<http://sourceforge.net/projects/craftychessinterface/>.


Configuration
=============
Crafty can be configured for a stronger game by setting some optional parameters (examples below).  
These parameters can be put into the crafty.rc file, or used as start-up parameters from the 
terminal.  A more thorough explanations of Crafty's parameters can be found here.

ponder on (Allows Crafty to think on your time)
hash=256m (Increases Crafty's position hash to 256MB)
hashp=64m (Increases Crafty's pawn hash to 64MB)
egtb (Tells Crafty to use syzygy Endgame Tables)
cache=32m (Increases Crafty's Endgame Table Cache to 32MB)
swindle on (Allows Crafty to try to win drawn games (according to Endgame Tables))
mt=4 (Increases Crafty's MaxThreads to 4 for a quad core computer)

This is a personal page managed by Mr. Tracy Riegle, Carlisle Pennsylvania, USA.

This page was last updated on November 1st 2021.
