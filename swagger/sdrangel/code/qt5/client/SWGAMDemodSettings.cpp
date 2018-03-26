/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGAMDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAMDemodSettings::SWGAMDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAMDemodSettings::SWGAMDemodSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    squelch = 0.0f;
    m_squelch_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    bandpass_enable = 0;
    m_bandpass_enable_isSet = false;
    copy_audio_to_udp = 0;
    m_copy_audio_to_udp_isSet = false;
    copy_audio_use_rtp = 0;
    m_copy_audio_use_rtp_isSet = false;
    udp_address = nullptr;
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
}

SWGAMDemodSettings::~SWGAMDemodSettings() {
    this->cleanup();
}

void
SWGAMDemodSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    squelch = 0.0f;
    m_squelch_isSet = false;
    volume = 0.0f;
    m_volume_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    bandpass_enable = 0;
    m_bandpass_enable_isSet = false;
    copy_audio_to_udp = 0;
    m_copy_audio_to_udp_isSet = false;
    copy_audio_use_rtp = 0;
    m_copy_audio_use_rtp_isSet = false;
    udp_address = new QString("");
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
}

void
SWGAMDemodSettings::cleanup() {








    if(udp_address != nullptr) { 
        delete udp_address;
    }


    if(title != nullptr) { 
        delete title;
    }
}

SWGAMDemodSettings*
SWGAMDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAMDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&squelch, pJson["squelch"], "float", "");
    
    ::SWGSDRangel::setValue(&volume, pJson["volume"], "float", "");
    
    ::SWGSDRangel::setValue(&audio_mute, pJson["audioMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bandpass_enable, pJson["bandpassEnable"], "qint32", "");
    
    ::SWGSDRangel::setValue(&copy_audio_to_udp, pJson["copyAudioToUDP"], "qint32", "");
    
    ::SWGSDRangel::setValue(&copy_audio_use_rtp, pJson["copyAudioUseRTP"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_address, pJson["udpAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_port, pJson["udpPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
}

QString
SWGAMDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGAMDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_squelch_isSet){
        obj->insert("squelch", QJsonValue(squelch));
    }
    if(m_volume_isSet){
        obj->insert("volume", QJsonValue(volume));
    }
    if(m_audio_mute_isSet){
        obj->insert("audioMute", QJsonValue(audio_mute));
    }
    if(m_bandpass_enable_isSet){
        obj->insert("bandpassEnable", QJsonValue(bandpass_enable));
    }
    if(m_copy_audio_to_udp_isSet){
        obj->insert("copyAudioToUDP", QJsonValue(copy_audio_to_udp));
    }
    if(m_copy_audio_use_rtp_isSet){
        obj->insert("copyAudioUseRTP", QJsonValue(copy_audio_use_rtp));
    }
    if(udp_address != nullptr && *udp_address != QString("")){
        toJsonValue(QString("udpAddress"), udp_address, obj, QString("QString"));
    }
    if(m_udp_port_isSet){
        obj->insert("udpPort", QJsonValue(udp_port));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }

    return obj;
}

qint64
SWGAMDemodSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGAMDemodSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGAMDemodSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGAMDemodSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

float
SWGAMDemodSettings::getSquelch() {
    return squelch;
}
void
SWGAMDemodSettings::setSquelch(float squelch) {
    this->squelch = squelch;
    this->m_squelch_isSet = true;
}

float
SWGAMDemodSettings::getVolume() {
    return volume;
}
void
SWGAMDemodSettings::setVolume(float volume) {
    this->volume = volume;
    this->m_volume_isSet = true;
}

qint32
SWGAMDemodSettings::getAudioMute() {
    return audio_mute;
}
void
SWGAMDemodSettings::setAudioMute(qint32 audio_mute) {
    this->audio_mute = audio_mute;
    this->m_audio_mute_isSet = true;
}

qint32
SWGAMDemodSettings::getBandpassEnable() {
    return bandpass_enable;
}
void
SWGAMDemodSettings::setBandpassEnable(qint32 bandpass_enable) {
    this->bandpass_enable = bandpass_enable;
    this->m_bandpass_enable_isSet = true;
}

qint32
SWGAMDemodSettings::getCopyAudioToUdp() {
    return copy_audio_to_udp;
}
void
SWGAMDemodSettings::setCopyAudioToUdp(qint32 copy_audio_to_udp) {
    this->copy_audio_to_udp = copy_audio_to_udp;
    this->m_copy_audio_to_udp_isSet = true;
}

qint32
SWGAMDemodSettings::getCopyAudioUseRtp() {
    return copy_audio_use_rtp;
}
void
SWGAMDemodSettings::setCopyAudioUseRtp(qint32 copy_audio_use_rtp) {
    this->copy_audio_use_rtp = copy_audio_use_rtp;
    this->m_copy_audio_use_rtp_isSet = true;
}

QString*
SWGAMDemodSettings::getUdpAddress() {
    return udp_address;
}
void
SWGAMDemodSettings::setUdpAddress(QString* udp_address) {
    this->udp_address = udp_address;
    this->m_udp_address_isSet = true;
}

qint32
SWGAMDemodSettings::getUdpPort() {
    return udp_port;
}
void
SWGAMDemodSettings::setUdpPort(qint32 udp_port) {
    this->udp_port = udp_port;
    this->m_udp_port_isSet = true;
}

qint32
SWGAMDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGAMDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGAMDemodSettings::getTitle() {
    return title;
}
void
SWGAMDemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}


bool
SWGAMDemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){ isObjectUpdated = true; break;}
        if(m_rf_bandwidth_isSet){ isObjectUpdated = true; break;}
        if(m_squelch_isSet){ isObjectUpdated = true; break;}
        if(m_volume_isSet){ isObjectUpdated = true; break;}
        if(m_audio_mute_isSet){ isObjectUpdated = true; break;}
        if(m_bandpass_enable_isSet){ isObjectUpdated = true; break;}
        if(m_copy_audio_to_udp_isSet){ isObjectUpdated = true; break;}
        if(m_copy_audio_use_rtp_isSet){ isObjectUpdated = true; break;}
        if(udp_address != nullptr && *udp_address != QString("")){ isObjectUpdated = true; break;}
        if(m_udp_port_isSet){ isObjectUpdated = true; break;}
        if(m_rgb_color_isSet){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

