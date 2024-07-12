#pragma once

#include "Modules/ModuleManager.h"

class FOperateVariableByReflectionModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
