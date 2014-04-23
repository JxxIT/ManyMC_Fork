#pragma once
#include <QString>
#include <memory>
#include "logic/BaseVersion.h"

struct ForgeVersion;
typedef std::shared_ptr<ForgeVersion> ForgeVersionPtr;

struct ForgeVersion : public BaseVersion
{
	virtual QString descriptor() override;
	virtual QString name() override;
	virtual QString typeString() const override;
	virtual bool operator<(BaseVersion &a) override;
	virtual bool operator>(BaseVersion &a) override;

	QString filename();
	QString url();
	
	bool usesInstaller();

	int m_buildnr = 0;
	QString universal_url;
	QString changelog_url;
	QString installer_url;
	QString jobbuildver;
	QString mcver;
	QString universal_filename;
	QString installer_filename;
	bool is_recommended = false;
};
