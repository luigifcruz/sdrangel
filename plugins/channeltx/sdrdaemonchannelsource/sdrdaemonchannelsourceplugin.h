///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2018 Edouard Griffiths, F4EXB                                   //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDE_SDRDAEMONCHANNELSOURCEPLUGIN_H
#define INCLUDE_SDRDAEMONCHANNELSOURCEPLUGIN_H

#include <QObject>
#include "plugin/plugininterface.h"

class DeviceUISet;
class BasebandSampleSource;

class SDRDaemonChannelSourcePlugin : public QObject, PluginInterface {
	Q_OBJECT
	Q_INTERFACES(PluginInterface)
	Q_PLUGIN_METADATA(IID "sdrangel.channeltx.sdrdaemonsource")

public:
	explicit SDRDaemonChannelSourcePlugin(QObject* parent = 0);

	const PluginDescriptor& getPluginDescriptor() const;
	void initPlugin(PluginAPI* pluginAPI);

	virtual PluginInstanceGUI* createTxChannelGUI(DeviceUISet *deviceUISet, BasebandSampleSource *txChannel);
	virtual BasebandSampleSource* createTxChannelBS(DeviceSinkAPI *deviceAPI);
	virtual ChannelSourceAPI* createTxChannelCS(DeviceSinkAPI *deviceAPI);

private:
	static const PluginDescriptor m_pluginDescriptor;

	PluginAPI* m_pluginAPI;
};

#endif // INCLUDE_SDRDAEMONCHANNELSOURCEPLUGIN_H
