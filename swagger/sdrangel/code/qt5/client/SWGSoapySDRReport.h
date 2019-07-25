/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.11.3
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGSoapySDRReport.h
 *
 * SoapySDR
 */

#ifndef SWGSoapySDRReport_H_
#define SWGSoapySDRReport_H_

#include <QJsonObject>


#include "SWGArgInfo.h"
#include "SWGRangeFloat.h"
#include "SWGSoapySDRFrequencySetting.h"
#include "SWGSoapySDRGainSetting.h"
#include <QList>
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGSoapySDRReport: public SWGObject {
public:
    SWGSoapySDRReport();
    SWGSoapySDRReport(QString* json);
    virtual ~SWGSoapySDRReport();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGSoapySDRReport* fromJson(QString &jsonString) override;

    QList<SWGArgInfo*>* getDeviceSettingsArgs();
    void setDeviceSettingsArgs(QList<SWGArgInfo*>* device_settings_args);

    QList<SWGArgInfo*>* getStreamSettingsArgs();
    void setStreamSettingsArgs(QList<SWGArgInfo*>* stream_settings_args);

    qint32 getHasDcAutoCorrection();
    void setHasDcAutoCorrection(qint32 has_dc_auto_correction);

    qint32 getHasDcOffsetValue();
    void setHasDcOffsetValue(qint32 has_dc_offset_value);

    qint32 getHasIqBalanceValue();
    void setHasIqBalanceValue(qint32 has_iq_balance_value);

    qint32 getHasFrequencyCorrectionValue();
    void setHasFrequencyCorrectionValue(qint32 has_frequency_correction_value);

    QList<QString*>* getAntennas();
    void setAntennas(QList<QString*>* antennas);

    qint32 getHasAgc();
    void setHasAgc(qint32 has_agc);

    SWGRangeFloat* getGainRange();
    void setGainRange(SWGRangeFloat* gain_range);

    QList<SWGSoapySDRGainSetting*>* getGainSettings();
    void setGainSettings(QList<SWGSoapySDRGainSetting*>* gain_settings);

    QList<SWGSoapySDRFrequencySetting*>* getFrequencySettings();
    void setFrequencySettings(QList<SWGSoapySDRFrequencySetting*>* frequency_settings);

    QList<SWGArgInfo*>* getFrequencySettingsArgs();
    void setFrequencySettingsArgs(QList<SWGArgInfo*>* frequency_settings_args);

    QList<SWGRangeFloat*>* getRatesRanges();
    void setRatesRanges(QList<SWGRangeFloat*>* rates_ranges);

    QList<SWGRangeFloat*>* getBandwidthsRanges();
    void setBandwidthsRanges(QList<SWGRangeFloat*>* bandwidths_ranges);


    virtual bool isSet() override;

private:
    QList<SWGArgInfo*>* device_settings_args;
    bool m_device_settings_args_isSet;

    QList<SWGArgInfo*>* stream_settings_args;
    bool m_stream_settings_args_isSet;

    qint32 has_dc_auto_correction;
    bool m_has_dc_auto_correction_isSet;

    qint32 has_dc_offset_value;
    bool m_has_dc_offset_value_isSet;

    qint32 has_iq_balance_value;
    bool m_has_iq_balance_value_isSet;

    qint32 has_frequency_correction_value;
    bool m_has_frequency_correction_value_isSet;

    QList<QString*>* antennas;
    bool m_antennas_isSet;

    qint32 has_agc;
    bool m_has_agc_isSet;

    SWGRangeFloat* gain_range;
    bool m_gain_range_isSet;

    QList<SWGSoapySDRGainSetting*>* gain_settings;
    bool m_gain_settings_isSet;

    QList<SWGSoapySDRFrequencySetting*>* frequency_settings;
    bool m_frequency_settings_isSet;

    QList<SWGArgInfo*>* frequency_settings_args;
    bool m_frequency_settings_args_isSet;

    QList<SWGRangeFloat*>* rates_ranges;
    bool m_rates_ranges_isSet;

    QList<SWGRangeFloat*>* bandwidths_ranges;
    bool m_bandwidths_ranges_isSet;

};

}

#endif /* SWGSoapySDRReport_H_ */
