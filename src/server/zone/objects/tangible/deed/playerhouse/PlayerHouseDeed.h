/*
 *	server/zone/objects/tangible/deed/playerhouse/PlayerHouseDeed.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLAYERHOUSEDEED_H_
#define PLAYERHOUSEDEED_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/tangible/deed/Deed.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace deed {
namespace playerhouse {

class PlayerHouseDeed : public Deed {
public:
	PlayerHouseDeed();

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

protected:
	PlayerHouseDeed(DummyConstructorParameter* param);

	virtual ~PlayerHouseDeed();

	friend class PlayerHouseDeedHelper;
};

} // namespace playerhouse
} // namespace deed
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::deed::playerhouse;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace deed {
namespace playerhouse {

class PlayerHouseDeedImplementation : public DeedImplementation {

public:
	PlayerHouseDeedImplementation();

	PlayerHouseDeedImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	PlayerHouseDeed* _this;

	operator const PlayerHouseDeed*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~PlayerHouseDeedImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class PlayerHouseDeed;
};

class PlayerHouseDeedAdapter : public DeedAdapter {
public:
	PlayerHouseDeedAdapter(PlayerHouseDeedImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

};

class PlayerHouseDeedHelper : public DistributedObjectClassHelper, public Singleton<PlayerHouseDeedHelper> {
	static PlayerHouseDeedHelper* staticInitializer;

public:
	PlayerHouseDeedHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlayerHouseDeedHelper>;
};

} // namespace playerhouse
} // namespace deed
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::deed::playerhouse;

#endif /*PLAYERHOUSEDEED_H_*/
