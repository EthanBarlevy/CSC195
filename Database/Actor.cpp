#include "Actor.h"

namespace edb {
	std::ostream& operator<<(std::ostream& ostream, Actor* actor)
	{
	

			ostream << actor->getName() << std::endl;
			ostream << actor->getHp() << std::endl;

			return ostream;
	
	}
}