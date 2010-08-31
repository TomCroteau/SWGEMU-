/*
 *	server/zone/objects/factorycrate/FactoryCrate.cpp generated by engine3 IDL compiler 0.60
 */

#include "FactoryCrate.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	FactoryCrateStub
 */

FactoryCrate::FactoryCrate() : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new FactoryCrateImplementation();
	_impl->_setStub(this);
}

FactoryCrate::FactoryCrate(DummyConstructorParameter* param) : TangibleObject(param) {
}

FactoryCrate::~FactoryCrate() {
}


void FactoryCrate::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((FactoryCrateImplementation*) _impl)->loadTemplateData(templateData);
}

void FactoryCrate::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((FactoryCrateImplementation*) _impl)->initializeTransientMembers();
}

void FactoryCrate::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((FactoryCrateImplementation*) _impl)->sendBaselinesTo(player);
}

void FactoryCrate::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((FactoryCrateImplementation*) _impl)->fillAttributeList(msg, object);
}

void FactoryCrate::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((FactoryCrateImplementation*) _impl)->fillObjectMenuResponse(menuResponse, player);
}

int FactoryCrate::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((FactoryCrateImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

void FactoryCrate::sendTo(SceneObject* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((FactoryCrateImplementation*) _impl)->sendTo(player, doClose);
}

bool FactoryCrate::isFactoryCrate() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithBooleanReturn();
	} else
		return ((FactoryCrateImplementation*) _impl)->isFactoryCrate();
}

void FactoryCrate::setUseCount(unsigned int newUseCount, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addUnsignedIntParameter(newUseCount);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((FactoryCrateImplementation*) _impl)->setUseCount(newUseCount, notifyClient);
}

TangibleObject* FactoryCrate::getPrototype() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return ((FactoryCrateImplementation*) _impl)->getPrototype();
}

String FactoryCrate::getCraftersName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithAsciiReturn(_return_getCraftersName);
		return _return_getCraftersName;
	} else
		return ((FactoryCrateImplementation*) _impl)->getCraftersName();
}

String FactoryCrate::getCraftersSerial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithAsciiReturn(_return_getCraftersSerial);
		return _return_getCraftersSerial;
	} else
		return ((FactoryCrateImplementation*) _impl)->getCraftersSerial();
}

bool FactoryCrate::extractObjectToParent(int count) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addSignedIntParameter(count);

		return method.executeWithBooleanReturn();
	} else
		return ((FactoryCrateImplementation*) _impl)->extractObjectToParent(count);
}

TangibleObject* FactoryCrate::extractObject(int count) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(count);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return ((FactoryCrateImplementation*) _impl)->extractObject(count);
}

void FactoryCrate::split(int newStackSize) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(newStackSize);

		method.executeWithVoidReturn();
	} else
		((FactoryCrateImplementation*) _impl)->split(newStackSize);
}

/*
 *	FactoryCrateImplementation
 */

FactoryCrateImplementation::FactoryCrateImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


FactoryCrateImplementation::~FactoryCrateImplementation() {
}


void FactoryCrateImplementation::finalize() {
}

void FactoryCrateImplementation::_initializeImplementation() {
	_setClassHelper(FactoryCrateHelper::instance());

	_serializationHelperMethod();
}

void FactoryCrateImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (FactoryCrate*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FactoryCrateImplementation::_getStub() {
	return _this;
}

FactoryCrateImplementation::operator const FactoryCrate*() {
	return _this;
}

void FactoryCrateImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FactoryCrateImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FactoryCrateImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FactoryCrateImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FactoryCrateImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FactoryCrateImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FactoryCrateImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FactoryCrateImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("FactoryCrate");

}

FactoryCrateImplementation::FactoryCrateImplementation() {
	_initializeImplementation();
	// server/zone/objects/factorycrate/FactoryCrate.idl(63):  		Logger.setLoggingName("FactoryCrate");
	Logger::setLoggingName("FactoryCrate");
}

bool FactoryCrateImplementation::isFactoryCrate() {
	// server/zone/objects/factorycrate/FactoryCrate.idl(113):  		return true;
	return true;
}

/*
 *	FactoryCrateAdapter
 */

FactoryCrateAdapter::FactoryCrateAdapter(FactoryCrateImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* FactoryCrateAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 9:
		sendTo((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 10:
		resp->insertBoolean(isFactoryCrate());
		break;
	case 11:
		setUseCount(inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 12:
		resp->insertLong(getPrototype()->_getObjectID());
		break;
	case 13:
		resp->insertAscii(getCraftersName());
		break;
	case 14:
		resp->insertAscii(getCraftersSerial());
		break;
	case 15:
		resp->insertBoolean(extractObjectToParent(inv->getSignedIntParameter()));
		break;
	case 16:
		resp->insertLong(extractObject(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 17:
		split(inv->getSignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void FactoryCrateAdapter::initializeTransientMembers() {
	((FactoryCrateImplementation*) impl)->initializeTransientMembers();
}

void FactoryCrateAdapter::sendBaselinesTo(SceneObject* player) {
	((FactoryCrateImplementation*) impl)->sendBaselinesTo(player);
}

int FactoryCrateAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((FactoryCrateImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void FactoryCrateAdapter::sendTo(SceneObject* player, bool doClose) {
	((FactoryCrateImplementation*) impl)->sendTo(player, doClose);
}

bool FactoryCrateAdapter::isFactoryCrate() {
	return ((FactoryCrateImplementation*) impl)->isFactoryCrate();
}

void FactoryCrateAdapter::setUseCount(unsigned int newUseCount, bool notifyClient) {
	((FactoryCrateImplementation*) impl)->setUseCount(newUseCount, notifyClient);
}

TangibleObject* FactoryCrateAdapter::getPrototype() {
	return ((FactoryCrateImplementation*) impl)->getPrototype();
}

String FactoryCrateAdapter::getCraftersName() {
	return ((FactoryCrateImplementation*) impl)->getCraftersName();
}

String FactoryCrateAdapter::getCraftersSerial() {
	return ((FactoryCrateImplementation*) impl)->getCraftersSerial();
}

bool FactoryCrateAdapter::extractObjectToParent(int count) {
	return ((FactoryCrateImplementation*) impl)->extractObjectToParent(count);
}

TangibleObject* FactoryCrateAdapter::extractObject(int count) {
	return ((FactoryCrateImplementation*) impl)->extractObject(count);
}

void FactoryCrateAdapter::split(int newStackSize) {
	((FactoryCrateImplementation*) impl)->split(newStackSize);
}

/*
 *	FactoryCrateHelper
 */

FactoryCrateHelper* FactoryCrateHelper::staticInitializer = FactoryCrateHelper::instance();

FactoryCrateHelper::FactoryCrateHelper() {
	className = "FactoryCrate";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void FactoryCrateHelper::finalizeHelper() {
	FactoryCrateHelper::finalize();
}

DistributedObject* FactoryCrateHelper::instantiateObject() {
	return new FactoryCrate(DummyConstructorParameter::instance());
}

DistributedObjectServant* FactoryCrateHelper::instantiateServant() {
	return new FactoryCrateImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FactoryCrateHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FactoryCrateAdapter((FactoryCrateImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

