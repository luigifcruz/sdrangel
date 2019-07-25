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


#include "SWGSDRPlayReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSDRPlayReport::SWGSDRPlayReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSDRPlayReport::SWGSDRPlayReport() {
    sample_rates = nullptr;
    m_sample_rates_isSet = false;
    bandwidths = nullptr;
    m_bandwidths_isSet = false;
    intermediate_frequencies = nullptr;
    m_intermediate_frequencies_isSet = false;
    frequency_bands = nullptr;
    m_frequency_bands_isSet = false;
}

SWGSDRPlayReport::~SWGSDRPlayReport() {
    this->cleanup();
}

void
SWGSDRPlayReport::init() {
    sample_rates = new QList<SWGSampleRate*>();
    m_sample_rates_isSet = false;
    bandwidths = new QList<SWGBandwidth*>();
    m_bandwidths_isSet = false;
    intermediate_frequencies = new QList<SWGFrequency*>();
    m_intermediate_frequencies_isSet = false;
    frequency_bands = new QList<SWGFrequencyBand*>();
    m_frequency_bands_isSet = false;
}

void
SWGSDRPlayReport::cleanup() {
    if(sample_rates != nullptr) { 
        auto arr = sample_rates;
        for(auto o: *arr) { 
            delete o;
        }
        delete sample_rates;
    }
    if(bandwidths != nullptr) { 
        auto arr = bandwidths;
        for(auto o: *arr) { 
            delete o;
        }
        delete bandwidths;
    }
    if(intermediate_frequencies != nullptr) { 
        auto arr = intermediate_frequencies;
        for(auto o: *arr) { 
            delete o;
        }
        delete intermediate_frequencies;
    }
    if(frequency_bands != nullptr) { 
        auto arr = frequency_bands;
        for(auto o: *arr) { 
            delete o;
        }
        delete frequency_bands;
    }
}

SWGSDRPlayReport*
SWGSDRPlayReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSDRPlayReport::fromJsonObject(QJsonObject &pJson) {
    
    ::SWGSDRangel::setValue(&sample_rates, pJson["sampleRates"], "QList", "SWGSampleRate");
    
    ::SWGSDRangel::setValue(&bandwidths, pJson["bandwidths"], "QList", "SWGBandwidth");
    
    ::SWGSDRangel::setValue(&intermediate_frequencies, pJson["intermediateFrequencies"], "QList", "SWGFrequency");
    
    ::SWGSDRangel::setValue(&frequency_bands, pJson["frequencyBands"], "QList", "SWGFrequencyBand");
}

QString
SWGSDRPlayReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSDRPlayReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(sample_rates->size() > 0){
        toJsonArray((QList<void*>*)sample_rates, obj, "sampleRates", "SWGSampleRate");
    }
    if(bandwidths->size() > 0){
        toJsonArray((QList<void*>*)bandwidths, obj, "bandwidths", "SWGBandwidth");
    }
    if(intermediate_frequencies->size() > 0){
        toJsonArray((QList<void*>*)intermediate_frequencies, obj, "intermediateFrequencies", "SWGFrequency");
    }
    if(frequency_bands->size() > 0){
        toJsonArray((QList<void*>*)frequency_bands, obj, "frequencyBands", "SWGFrequencyBand");
    }

    return obj;
}

QList<SWGSampleRate*>*
SWGSDRPlayReport::getSampleRates() {
    return sample_rates;
}
void
SWGSDRPlayReport::setSampleRates(QList<SWGSampleRate*>* sample_rates) {
    this->sample_rates = sample_rates;
    this->m_sample_rates_isSet = true;
}

QList<SWGBandwidth*>*
SWGSDRPlayReport::getBandwidths() {
    return bandwidths;
}
void
SWGSDRPlayReport::setBandwidths(QList<SWGBandwidth*>* bandwidths) {
    this->bandwidths = bandwidths;
    this->m_bandwidths_isSet = true;
}

QList<SWGFrequency*>*
SWGSDRPlayReport::getIntermediateFrequencies() {
    return intermediate_frequencies;
}
void
SWGSDRPlayReport::setIntermediateFrequencies(QList<SWGFrequency*>* intermediate_frequencies) {
    this->intermediate_frequencies = intermediate_frequencies;
    this->m_intermediate_frequencies_isSet = true;
}

QList<SWGFrequencyBand*>*
SWGSDRPlayReport::getFrequencyBands() {
    return frequency_bands;
}
void
SWGSDRPlayReport::setFrequencyBands(QList<SWGFrequencyBand*>* frequency_bands) {
    this->frequency_bands = frequency_bands;
    this->m_frequency_bands_isSet = true;
}


bool
SWGSDRPlayReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(sample_rates->size() > 0){ isObjectUpdated = true; break;}
        if(bandwidths->size() > 0){ isObjectUpdated = true; break;}
        if(intermediate_frequencies->size() > 0){ isObjectUpdated = true; break;}
        if(frequency_bands->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

