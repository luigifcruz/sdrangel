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


#include "SWGSDRPlaySettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSDRPlaySettings::SWGSDRPlaySettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSDRPlaySettings::SWGSDRPlaySettings() {
    center_frequency = 0;
    m_center_frequency_isSet = false;
    tuner_gain = 0;
    m_tuner_gain_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    frequency_band_index = 0;
    m_frequency_band_index_isSet = false;
    if_frequency_index = 0;
    m_if_frequency_index_isSet = false;
    bandwidth_index = 0;
    m_bandwidth_index_isSet = false;
    dev_sample_rate_index = 0;
    m_dev_sample_rate_index_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
    tuner_gain_mode = 0;
    m_tuner_gain_mode_isSet = false;
    lna_on = 0;
    m_lna_on_isSet = false;
    mixer_amp_on = 0;
    m_mixer_amp_on_isSet = false;
    baseband_gain = 0;
    m_baseband_gain_isSet = false;
    file_record_name = nullptr;
    m_file_record_name_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

SWGSDRPlaySettings::~SWGSDRPlaySettings() {
    this->cleanup();
}

void
SWGSDRPlaySettings::init() {
    center_frequency = 0;
    m_center_frequency_isSet = false;
    tuner_gain = 0;
    m_tuner_gain_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    frequency_band_index = 0;
    m_frequency_band_index_isSet = false;
    if_frequency_index = 0;
    m_if_frequency_index_isSet = false;
    bandwidth_index = 0;
    m_bandwidth_index_isSet = false;
    dev_sample_rate_index = 0;
    m_dev_sample_rate_index_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
    tuner_gain_mode = 0;
    m_tuner_gain_mode_isSet = false;
    lna_on = 0;
    m_lna_on_isSet = false;
    mixer_amp_on = 0;
    m_mixer_amp_on_isSet = false;
    baseband_gain = 0;
    m_baseband_gain_isSet = false;
    file_record_name = new QString("");
    m_file_record_name_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

void
SWGSDRPlaySettings::cleanup() {















    if(file_record_name != nullptr) { 
        delete file_record_name;
    }

    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }


}

SWGSDRPlaySettings*
SWGSDRPlaySettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSDRPlaySettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tuner_gain, pJson["tunerGain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&l_oppm_tenths, pJson["LOppmTenths"], "qint32", "");
    
    ::SWGSDRangel::setValue(&frequency_band_index, pJson["frequencyBandIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&if_frequency_index, pJson["ifFrequencyIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bandwidth_index, pJson["bandwidthIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate_index, pJson["devSampleRateIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_decim, pJson["log2Decim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fc_pos, pJson["fcPos"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dc_block, pJson["dcBlock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&iq_correction, pJson["iqCorrection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tuner_gain_mode, pJson["tunerGainMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lna_on, pJson["lnaOn"], "qint32", "");
    
    ::SWGSDRangel::setValue(&mixer_amp_on, pJson["mixerAmpOn"], "qint32", "");
    
    ::SWGSDRangel::setValue(&baseband_gain, pJson["basebandGain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&file_record_name, pJson["fileRecordName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
}

QString
SWGSDRPlaySettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSDRPlaySettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_tuner_gain_isSet){
        obj->insert("tunerGain", QJsonValue(tuner_gain));
    }
    if(m_l_oppm_tenths_isSet){
        obj->insert("LOppmTenths", QJsonValue(l_oppm_tenths));
    }
    if(m_frequency_band_index_isSet){
        obj->insert("frequencyBandIndex", QJsonValue(frequency_band_index));
    }
    if(m_if_frequency_index_isSet){
        obj->insert("ifFrequencyIndex", QJsonValue(if_frequency_index));
    }
    if(m_bandwidth_index_isSet){
        obj->insert("bandwidthIndex", QJsonValue(bandwidth_index));
    }
    if(m_dev_sample_rate_index_isSet){
        obj->insert("devSampleRateIndex", QJsonValue(dev_sample_rate_index));
    }
    if(m_log2_decim_isSet){
        obj->insert("log2Decim", QJsonValue(log2_decim));
    }
    if(m_fc_pos_isSet){
        obj->insert("fcPos", QJsonValue(fc_pos));
    }
    if(m_dc_block_isSet){
        obj->insert("dcBlock", QJsonValue(dc_block));
    }
    if(m_iq_correction_isSet){
        obj->insert("iqCorrection", QJsonValue(iq_correction));
    }
    if(m_tuner_gain_mode_isSet){
        obj->insert("tunerGainMode", QJsonValue(tuner_gain_mode));
    }
    if(m_lna_on_isSet){
        obj->insert("lnaOn", QJsonValue(lna_on));
    }
    if(m_mixer_amp_on_isSet){
        obj->insert("mixerAmpOn", QJsonValue(mixer_amp_on));
    }
    if(m_baseband_gain_isSet){
        obj->insert("basebandGain", QJsonValue(baseband_gain));
    }
    if(file_record_name != nullptr && *file_record_name != QString("")){
        toJsonValue(QString("fileRecordName"), file_record_name, obj, QString("QString"));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }

    return obj;
}

qint32
SWGSDRPlaySettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGSDRPlaySettings::setCenterFrequency(qint32 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGSDRPlaySettings::getTunerGain() {
    return tuner_gain;
}
void
SWGSDRPlaySettings::setTunerGain(qint32 tuner_gain) {
    this->tuner_gain = tuner_gain;
    this->m_tuner_gain_isSet = true;
}

qint32
SWGSDRPlaySettings::getLOppmTenths() {
    return l_oppm_tenths;
}
void
SWGSDRPlaySettings::setLOppmTenths(qint32 l_oppm_tenths) {
    this->l_oppm_tenths = l_oppm_tenths;
    this->m_l_oppm_tenths_isSet = true;
}

qint32
SWGSDRPlaySettings::getFrequencyBandIndex() {
    return frequency_band_index;
}
void
SWGSDRPlaySettings::setFrequencyBandIndex(qint32 frequency_band_index) {
    this->frequency_band_index = frequency_band_index;
    this->m_frequency_band_index_isSet = true;
}

qint32
SWGSDRPlaySettings::getIfFrequencyIndex() {
    return if_frequency_index;
}
void
SWGSDRPlaySettings::setIfFrequencyIndex(qint32 if_frequency_index) {
    this->if_frequency_index = if_frequency_index;
    this->m_if_frequency_index_isSet = true;
}

qint32
SWGSDRPlaySettings::getBandwidthIndex() {
    return bandwidth_index;
}
void
SWGSDRPlaySettings::setBandwidthIndex(qint32 bandwidth_index) {
    this->bandwidth_index = bandwidth_index;
    this->m_bandwidth_index_isSet = true;
}

qint32
SWGSDRPlaySettings::getDevSampleRateIndex() {
    return dev_sample_rate_index;
}
void
SWGSDRPlaySettings::setDevSampleRateIndex(qint32 dev_sample_rate_index) {
    this->dev_sample_rate_index = dev_sample_rate_index;
    this->m_dev_sample_rate_index_isSet = true;
}

qint32
SWGSDRPlaySettings::getLog2Decim() {
    return log2_decim;
}
void
SWGSDRPlaySettings::setLog2Decim(qint32 log2_decim) {
    this->log2_decim = log2_decim;
    this->m_log2_decim_isSet = true;
}

qint32
SWGSDRPlaySettings::getFcPos() {
    return fc_pos;
}
void
SWGSDRPlaySettings::setFcPos(qint32 fc_pos) {
    this->fc_pos = fc_pos;
    this->m_fc_pos_isSet = true;
}

qint32
SWGSDRPlaySettings::getDcBlock() {
    return dc_block;
}
void
SWGSDRPlaySettings::setDcBlock(qint32 dc_block) {
    this->dc_block = dc_block;
    this->m_dc_block_isSet = true;
}

qint32
SWGSDRPlaySettings::getIqCorrection() {
    return iq_correction;
}
void
SWGSDRPlaySettings::setIqCorrection(qint32 iq_correction) {
    this->iq_correction = iq_correction;
    this->m_iq_correction_isSet = true;
}

qint32
SWGSDRPlaySettings::getTunerGainMode() {
    return tuner_gain_mode;
}
void
SWGSDRPlaySettings::setTunerGainMode(qint32 tuner_gain_mode) {
    this->tuner_gain_mode = tuner_gain_mode;
    this->m_tuner_gain_mode_isSet = true;
}

qint32
SWGSDRPlaySettings::getLnaOn() {
    return lna_on;
}
void
SWGSDRPlaySettings::setLnaOn(qint32 lna_on) {
    this->lna_on = lna_on;
    this->m_lna_on_isSet = true;
}

qint32
SWGSDRPlaySettings::getMixerAmpOn() {
    return mixer_amp_on;
}
void
SWGSDRPlaySettings::setMixerAmpOn(qint32 mixer_amp_on) {
    this->mixer_amp_on = mixer_amp_on;
    this->m_mixer_amp_on_isSet = true;
}

qint32
SWGSDRPlaySettings::getBasebandGain() {
    return baseband_gain;
}
void
SWGSDRPlaySettings::setBasebandGain(qint32 baseband_gain) {
    this->baseband_gain = baseband_gain;
    this->m_baseband_gain_isSet = true;
}

QString*
SWGSDRPlaySettings::getFileRecordName() {
    return file_record_name;
}
void
SWGSDRPlaySettings::setFileRecordName(QString* file_record_name) {
    this->file_record_name = file_record_name;
    this->m_file_record_name_isSet = true;
}

qint32
SWGSDRPlaySettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGSDRPlaySettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGSDRPlaySettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGSDRPlaySettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGSDRPlaySettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGSDRPlaySettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGSDRPlaySettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGSDRPlaySettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}


bool
SWGSDRPlaySettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_tuner_gain_isSet){ isObjectUpdated = true; break;}
        if(m_l_oppm_tenths_isSet){ isObjectUpdated = true; break;}
        if(m_frequency_band_index_isSet){ isObjectUpdated = true; break;}
        if(m_if_frequency_index_isSet){ isObjectUpdated = true; break;}
        if(m_bandwidth_index_isSet){ isObjectUpdated = true; break;}
        if(m_dev_sample_rate_index_isSet){ isObjectUpdated = true; break;}
        if(m_log2_decim_isSet){ isObjectUpdated = true; break;}
        if(m_fc_pos_isSet){ isObjectUpdated = true; break;}
        if(m_dc_block_isSet){ isObjectUpdated = true; break;}
        if(m_iq_correction_isSet){ isObjectUpdated = true; break;}
        if(m_tuner_gain_mode_isSet){ isObjectUpdated = true; break;}
        if(m_lna_on_isSet){ isObjectUpdated = true; break;}
        if(m_mixer_amp_on_isSet){ isObjectUpdated = true; break;}
        if(m_baseband_gain_isSet){ isObjectUpdated = true; break;}
        if(file_record_name != nullptr && *file_record_name != QString("")){ isObjectUpdated = true; break;}
        if(m_use_reverse_api_isSet){ isObjectUpdated = true; break;}
        if(reverse_api_address != nullptr && *reverse_api_address != QString("")){ isObjectUpdated = true; break;}
        if(m_reverse_api_port_isSet){ isObjectUpdated = true; break;}
        if(m_reverse_api_device_index_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

