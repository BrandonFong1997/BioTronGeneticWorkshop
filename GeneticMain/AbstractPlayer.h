#ifndef ABSTRACTPLAYER_H
#define ABSTRACTPLAYER_H

#include <string>

class AbstractPlayer {
	public:
        	virtual int makeMove(int[][7], int) = 0;
};

#endif
