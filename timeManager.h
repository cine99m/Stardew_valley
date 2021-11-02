#pragma once
#include "singletonBase.h"
#include "timer.h"

class timeManager : public singletonBase<timeManager>
{
private:
	timer* _timer;

public:
	timeManager();
	~timeManager();

	HRESULT init();
	void release();
	void update(float lock = 0.0f);
	void render(HDC hdc);

	inline float getElapsedTime() const { return _timer->getElapsedTime(); }
	inline float getWorldTime() const { return _timer->getWorldTime(); }
	inline float GetWorldElapsedTime() { return _timer->GetWorldElapsedTime(); }
	inline void SetWorldElapsedTime(float elapsedTime) { _timer->SetWorldElapsedTime(elapsedTime); }
};
