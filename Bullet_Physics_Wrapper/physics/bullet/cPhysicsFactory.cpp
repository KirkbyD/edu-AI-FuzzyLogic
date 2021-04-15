#include "cPhysicsFactory.hpp"

namespace nPhysics {
	cPhysicsFactory::cPhysicsFactory() { }

	iPhysicsWorld* cPhysicsFactory::CreateWorld() {
		return new cPhysicsWorld();
	}

	iBallComponent* cPhysicsFactory::CreateBall(const sBallDef& def, const unsigned& id) {
		return new cBallComponent(def, id);
	}

	iPlaneComponent* cPhysicsFactory::CreatePlane(const sPlaneDef& def, const unsigned& id) {
		return new cPlaneComponent(def, id);
	}

	iClothComponent* cPhysicsFactory::CreateCloth(const sClothDef& def, const unsigned& id)
	{
		return nullptr;
	}

	iBoxComponent* cPhysicsFactory::CreateBox(const sBoxDef& def, const unsigned& id) {
		return new cBoxComponent(def, id);
	}

	iCapsuleComponent* cPhysicsFactory::CreateCapsule(const sCapsuleDef& def, const unsigned& id) {
		return new cCapsuleComponent(def, id);
	}
	iTriangleMeshComponent* cPhysicsFactory::CreateTriangleMesh(const sTriangleMeshDef& def, const unsigned& id) {
		return new cTriangleMeshComponent(def, id);
	}

	iCharacterController* cPhysicsFactory::CreateCharacterController(const sCharacterDef& def, const unsigned& id) {
		return new cCharacterController(def, id);
	}
}