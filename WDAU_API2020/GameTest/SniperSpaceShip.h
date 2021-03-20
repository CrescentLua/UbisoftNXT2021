#ifndef SNIPERSPACESHIP_H 
#define SNIPERSPACESHIP_H 
#include "SpaceShipTower.h"
#include "SniperBullet.h"

class SniperSpaceShip : public SpaceShipTower
{
public:
	SniperSpaceShip();
	virtual ~SniperSpaceShip();
	void Update(float deltaTime_) override;
	void Render() override;
	void OnDestroy() override;

	void SetPosition(float x_, float y_) override;
	void SetAngle(float newAngle_) override;

	void GetPosition(float& x, float& y) override;
	void AttackClosestEnemy(Enemy* enemy_) override;
	float GetRange() override;
private:
	CSimpleSprite* towerSprite;
	float TowerRange;
	float bulletCurrentLifeTime;
	float createNewBulletsTick;
	float defaultShootingWaitTime;
	int fireRate;

	std::vector<Bullet*> EnemyBullets;
};
#endif 

