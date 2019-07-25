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


#include "SWGChannel.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGChannel::SWGChannel(QString* json) {
    init();
    this->fromJson(*json);
}

SWGChannel::SWGChannel() {
    index = 0;
    m_index_isSet = false;
    id = nullptr;
    m_id_isSet = false;
    uid = 0L;
    m_uid_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    delta_frequency = 0;
    m_delta_frequency_isSet = false;
    report = nullptr;
    m_report_isSet = false;
}

SWGChannel::~SWGChannel() {
    this->cleanup();
}

void
SWGChannel::init() {
    index = 0;
    m_index_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    uid = 0L;
    m_uid_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    delta_frequency = 0;
    m_delta_frequency_isSet = false;
    report = new SWGChannelReport();
    m_report_isSet = false;
}

void
SWGChannel::cleanup() {

    if(id != nullptr) { 
        delete id;
    }

    if(title != nullptr) { 
        delete title;
    }

    if(report != nullptr) { 
        delete report;
    }
}

SWGChannel*
SWGChannel::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGChannel::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&index, pJson["index"], "qint32", "");
    
    ::SWGSDRangel::setValue(&id, pJson["id"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&uid, pJson["uid"], "qint64", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&delta_frequency, pJson["deltaFrequency"], "qint32", "");
    
    ::SWGSDRangel::setValue(&report, pJson["report"], "SWGChannelReport", "SWGChannelReport");
    
}

QString
SWGChannel::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGChannel::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_index_isSet){
        obj->insert("index", QJsonValue(index));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(m_uid_isSet){
        obj->insert("uid", QJsonValue(uid));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_delta_frequency_isSet){
        obj->insert("deltaFrequency", QJsonValue(delta_frequency));
    }
    if((report != nullptr) && (report->isSet())){
        toJsonValue(QString("report"), report, obj, QString("SWGChannelReport"));
    }

    return obj;
}

qint32
SWGChannel::getIndex() {
    return index;
}
void
SWGChannel::setIndex(qint32 index) {
    this->index = index;
    this->m_index_isSet = true;
}

QString*
SWGChannel::getId() {
    return id;
}
void
SWGChannel::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

qint64
SWGChannel::getUid() {
    return uid;
}
void
SWGChannel::setUid(qint64 uid) {
    this->uid = uid;
    this->m_uid_isSet = true;
}

QString*
SWGChannel::getTitle() {
    return title;
}
void
SWGChannel::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGChannel::getDeltaFrequency() {
    return delta_frequency;
}
void
SWGChannel::setDeltaFrequency(qint32 delta_frequency) {
    this->delta_frequency = delta_frequency;
    this->m_delta_frequency_isSet = true;
}

SWGChannelReport*
SWGChannel::getReport() {
    return report;
}
void
SWGChannel::setReport(SWGChannelReport* report) {
    this->report = report;
    this->m_report_isSet = true;
}


bool
SWGChannel::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_index_isSet){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(m_uid_isSet){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
        if(m_delta_frequency_isSet){ isObjectUpdated = true; break;}
        if(report != nullptr && report->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

